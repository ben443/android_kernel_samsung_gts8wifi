SECTIONS {
 /DISCARD/ : {
  *(.discard)
  *(.discard.*)
  *(.eh_frame)
 }
 __ksymtab 0 : { *(SORT(___ksymtab+*)) }
 __ksymtab_gpl 0 : { *(SORT(___ksymtab_gpl+*)) }
 __ksymtab_unused 0 : { *(SORT(___ksymtab_unused+*)) }
 __ksymtab_unused_gpl 0 : { *(SORT(___ksymtab_unused_gpl+*)) }
 __ksymtab_gpl_future 0 : { *(SORT(___ksymtab_gpl_future+*)) }
 __kcrctab 0 : { *(SORT(___kcrctab+*)) }
 __kcrctab_gpl 0 : { *(SORT(___kcrctab_gpl+*)) }
 __kcrctab_unused 0 : { *(SORT(___kcrctab_unused+*)) }
 __kcrctab_unused_gpl 0 : { *(SORT(___kcrctab_unused_gpl+*)) }
 __kcrctab_gpl_future 0 : { *(SORT(___kcrctab_gpl_future+*)) }
 .init_array 0 : ALIGN(8) { *(SORT(.init_array.*)) *(.init_array) }
 .altinstructions 0 : ALIGN(8) { KEEP(*(.altinstructions)) }
 __bug_table 0 : ALIGN(8) { KEEP(*(__bug_table)) }
 __jump_table 0 : ALIGN(8) { KEEP(*(__jump_table)) }
 __patchable_function_entries : { *(__patchable_function_entries) }
}
