
/* Void <DumpNodes>b__0(PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator+<>c__DisplayClass9_0::
     PluralFormsCalculator_c_DisplayClass9_0__DumpNodes_b__0
               (PluralFormsCalculator_c_DisplayClass9_0 *this,PluralFormsNode *node,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).tracer;
  if (pRVar1 == (RecursiveTracer *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (pRVar1->fields)._Level_k__BackingField;
  pSVar4 = (pRVar1->fields)._Text_k__BackingField;
  aiStackX_8[0] = iVar3;
  (pRVar1->fields)._Level_k__BackingField = iVar3 + 1;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar5 = StringLiteral__0___;
  if (pSVar4 == (StringBuilder *)0x0) goto code_?;
  PStack_6._arg0 = (Object *)0x0;
  PStack_6._arg1 = (Object *)0x0;
  PStack_6._arg2 = (Object *)0x0;
  PStack_6._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_6,arg0,(MethodInfo *)0x0);
  PStack_7._arg0 = PStack_6._arg0;
  PStack_7._arg1 = PStack_6._arg1;
  PStack_7._arg2 = PStack_6._arg2;
  PStack_7._args = PStack_6._args;
  mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormatHelper
            (pSVar4,(IFormatProvider *)0x0,pSVar5,&PStack_7,(MethodInfo *)0x0);
  pRVar1 = (this->fields).tracer;
  if (pRVar1 == (RecursiveTracer *)0x0) goto code_?;
  RecursiveTracer::RecursiveTracer_Indent(pRVar1,(MethodInfo *)0x0);
  pRVar1 = (this->fields).tracer;
  if (((pRVar1 == (RecursiveTracer *)0x0) ||
      (pSVar4 = (pRVar1->fields)._Text_k__BackingField, node == (PluralFormsNode *)0x0)) ||
     (pSVar5 = (String *)
               (*(node->klass->vtable).ToString.methodPtr)
                         (node,(node->klass->vtable).ToString.method),
     pSVar4 == (StringBuilder *)0x0)) goto code_?;
  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(pSVar4,pSVar5,(MethodInfo *)0x0)
  ;
  pSVar5 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
  if (pSVar5 == (String *)0x0) {
    return;
  }
  pCVar8 = (pSVar4->fields).m_ChunkChars;
  uVar9 = (pSVar4->fields).m_ChunkLength;
  iVar3 = (pSVar5->fields)._stringLength;
  iVar10 = iVar3 + uVar9;
  if (pCVar8 == (Char__Array *)0x0) {
    PStack_6._args = (Object__Array *)&UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)pCVar8->max_length <= iVar10) {
    PStack_6._args = (Object__Array *)&UNK_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_13
              (pSVar4,&(pSVar5->fields)._firstChar,(pSVar5->fields)._stringLength,(MethodInfo *)0x0)
    ;
    return;
  }
  if (iVar3 < 3) {
    if (0 < iVar3) {
      if (iVar3 < 1) goto code_?;
      if ((uint)pCVar8->max_length <= uVar9) goto code_?;
      pCVar8->vector[(int)uVar9] = (pSVar5->fields)._firstChar;
    }
    if (1 < iVar3) {
      if ((pSVar5->fields)._stringLength < 2) {
code_?:
        PStack_6._args = (Object__Array *)&UNK_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 + 1 < (uint)pCVar8->max_length) {
        pCVar8->vector[(longlong)(int)uVar9 + 1] = *(uint16_t *)&(pSVar5->fields).field_0x6;
        (pSVar4->fields).m_ChunkLength = iVar10;
        return;
      }
      goto code_?;
    }
  }
  else {
    src = &(pSVar5->fields)._firstChar;
    if ((uint)pCVar8->max_length <= uVar9) {
code_?:
      PStack_6._args = (Object__Array *)&UNK_?;
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dest = pCVar8->vector + (int)uVar9;
    uVar9 = iVar3 * 2;
    if (((ulonglong)((longlong)dest - (longlong)src) < (ulonglong)uVar9) ||
       ((ulonglong)((longlong)src - (longlong)dest) < (ulonglong)uVar9)) {
      PStack_6._args = (Object__Array *)&UNK_?;
      FUN_?(dest,src,uVar9);
      (pSVar4->fields).m_ChunkLength = iVar10;
      return;
    }
    PStack_6._args = (Object__Array *)&UNK_?;
    mscorlib.dll::System::Buffer::Buffer_Memcpy_1
              ((uint8_t *)dest,(uint8_t *)src,uVar9,(MethodInfo *)0x0);
  }
  (pSVar4->fields).m_ChunkLength = iVar10;
  return;
}


/* Void <DumpNodes>b__1(PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsCalculator+<>c__DisplayClass9_0::
     PluralFormsCalculator_c_DisplayClass9_0__DumpNodes_b__1
               (PluralFormsCalculator_c_DisplayClass9_0 *this,PluralFormsNode *node,
               MethodInfo *method)

{
  pRVar1 = (this->fields).tracer;
  if (pRVar1 != (RecursiveTracer *)0x0) {
    pRVar2 = &pRVar1->fields;
    pRVar2->_Level_k__BackingField = pRVar2->_Level_k__BackingField + -1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

