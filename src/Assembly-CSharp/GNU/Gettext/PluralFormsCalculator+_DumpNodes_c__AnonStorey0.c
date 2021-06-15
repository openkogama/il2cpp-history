
/* Void <>m__0(PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator+<DumpNodes>c__AnonStorey0::
     PluralFormsCalculator_DumpNodes_c_AnonStorey0___m__0
               (PluralFormsCalculator_DumpNodes_c_AnonStorey0 *this,PluralFormsNode *node,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  pRVar2 = (this->fields).tracer;
  if (pRVar2 != (RecursiveTracer *)0x0) {
    this = (PluralFormsCalculator_DumpNodes_c_AnonStorey0 *)(pRVar2->fields)._Level_k__BackingField;
    pSVar3 = (pRVar2->fields)._Text_k__BackingField;
    (pRVar2->fields)._Level_k__BackingField = (int32_t)((int)&this->klass + 1);
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (pSVar3 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_2
                (pSVar3,StringLiteral__0___,arg0,(MethodInfo *)0x0);
      pRVar2 = (pPVar1->fields).tracer;
      if (pRVar2 != (RecursiveTracer *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        iVar4 = 0;
        if (0 < (pRVar2->fields)._Level_k__BackingField) {
          do {
            pSVar3 = (pRVar2->fields)._Text_k__BackingField;
            if (pSVar3 == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                      (pSVar3,StringLiteral_u0009,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (pRVar2->fields)._Level_k__BackingField);
        }
        pRVar2 = (pPVar1->fields).tracer;
        if (pRVar2 != (RecursiveTracer *)0x0) {
          pSVar3 = (pRVar2->fields)._Text_k__BackingField;
          if (node != (PluralFormsNode *)0x0) {
            value = (String *)
                    (*(code *)(node->klass->vtable).ToString.method)(node,node->klass[1]._0.image);
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <>m__1(PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator+<DumpNodes>c__AnonStorey0::
     PluralFormsCalculator_DumpNodes_c_AnonStorey0___m__1
               (PluralFormsCalculator_DumpNodes_c_AnonStorey0 *this,PluralFormsNode *node,
               MethodInfo *method)

{
  pRVar1 = (this->fields).tracer;
  if (pRVar1 != (RecursiveTracer *)0x0) {
    pRVar2 = &pRVar1->fields;
    pRVar2->_Level_k__BackingField = pRVar2->_Level_k__BackingField + -1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

