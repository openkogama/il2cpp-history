
/* Void <DumpNodes>b__0(PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator+<>c__DisplayClass9_0::
     PluralFormsCalculator_c_DisplayClass9_0__DumpNodes_b__0
               (PluralFormsCalculator_c_DisplayClass9_0 *this,PluralFormsNode *node,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__0___);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  pRVar2 = (this->fields).tracer;
  if (pRVar2 != (RecursiveTracer *)0x0) {
    pSVar3 = (pRVar2->fields)._Text_k__BackingField;
    this = (PluralFormsCalculator_c_DisplayClass9_0 *)(pRVar2->fields)._Level_k__BackingField;
    (pRVar2->fields)._Level_k__BackingField = (int32_t)((int)&this->klass + 1);
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (pSVar3 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat
                (pSVar3,StringLiteral__0___,arg0,(MethodInfo *)0x0);
      pRVar2 = (pPVar1->fields).tracer;
      if (pRVar2 != (RecursiveTracer *)0x0) {
        if (cRam_? == '\0') {
          func_?(&StringLiteral_u0009);
          cRam_? = '\x01';
        }
        iVar4 = 0;
        if (0 < (pRVar2->fields)._Level_k__BackingField) {
          do {
            pSVar3 = (pRVar2->fields)._Text_k__BackingField;
            if (pSVar3 == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (pSVar3,StringLiteral_u0009,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (pRVar2->fields)._Level_k__BackingField);
        }
        pRVar2 = (pPVar1->fields).tracer;
        if (pRVar2 != (RecursiveTracer *)0x0) {
          pSVar3 = (pRVar2->fields)._Text_k__BackingField;
          if (node != (PluralFormsNode *)0x0) {
            value = (String *)
                    (*(node->klass->vtable).ToString.methodPtr)
                              (node,(node->klass->vtable).ToString.method);
            if (pSVar3 != (StringBuilder *)0x0) {
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine_1
                        (pSVar3,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <DumpNodes>b__1(PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator+<>c__DisplayClass9_0::
     PluralFormsCalculator_c_DisplayClass9_0__DumpNodes_b__1
               (PluralFormsCalculator_c_DisplayClass9_0 *this,PluralFormsNode *node,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pRVar2 = (this->fields).tracer;
  if (pRVar2 != (RecursiveTracer *)0x0) {
    pRVar3 = &pRVar2->fields;
    pRVar3->_Level_k__BackingField = pRVar3->_Level_k__BackingField + -1;
    return;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

