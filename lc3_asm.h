typedef enum opcode {
  OP_INVALID = -1, /**< invalid opcode                                       */
  OP_BR,           /**< PC = PCi + PCoffset9 if condition is met             */
  OP_ADD,          /**< DR = SR1 + SR2 or DR = SR1 + imm5                    */
  OP_LD,           /**< DR = mem[PCi + PCoffset9]                            */
  OP_ST,           /**< mem[PCi + PCoffset9] = SR                            */
  OP_JSR_JSRR,     /**< R7 = PCi and (PC = SR or PC = PCi + PCoffest9)       */
  OP_AND,          /**< DR = SR1 & SR2                                       */
  OP_LDR,          /**< DR = mem[BaseR + offset6]                            */
  OP_STR,          /**< mem[BaseR + offset6] = SR                            */
  OP_RTI,          /**< PC = R7, exit supervisor mode                        */
  OP_NOT,          /**< DR = ~SR1                                            */
  OP_LDI,          /**< DR = mem[mem[PCi + PCoffset9]]                       */
  OP_STI,          /**< mem[mem[PCi + offset9]] = SR                         */
  OP_JMP_RET,      /**< PC = R7 (RET) or PC = Rx (JMP Rx)                    */
  OP_RESERVED,     /**< Currently not used                                   */
  OP_LEA,          /**< DR = PCi + PCoffset9                                 */
  OP_TRAP,         /**< R7 = PCi, PC = mem[mem[trap]], enter supervisor mode */
  OP_ORIG,         /**< memory location where code is loaded                 */
  OP_END,          /**< end of propgram - only comments may follow           */
  OP_BLKW,         /**< allocate N words of storage initialized with 0       */
  OP_FILL,         /**< allocate 1 word of storage initialed with operand    */
  OP_STRINGZ,      /**< allocate N+1 words of storage initialized with
                            string and null terminator (1 char per word)     */
  OP_GETC,         /**< Read character from keyboard, no echo      (trap x20)*/
  OP_OUT,          /**< Write one character                        (trap x21)*/
  OP_PUTS,         /**< Write null terminated string               (trap x22)*/
  OP_IN,           /**< Print prompt and read/echo character       (trap x23)*/
  OP_PUTSP,        /**< Write packed null terminated string        (trap x24)*/
  OP_HALT,         /**< Halt execution                             (trap x25)*/
  OP_GETS,         /**< Read string from keyboard, store in memory (trap x26)*/
  OP_ZERO,         /**< DR = 0 (AND DR,DR,#0)                                */
  OP_COPY,         /**< DR = SR1 (ADD DR,SR1,#0)                             */
  OP_NEG,          /**< DR = -DR (NOT DR,DR and ADD DR,DR,#1)                */
  NUM_OPCODES      /**< Initialized by compiler                              */
} opcode_t;
