
/* Boolean NeedRebuild(Boolean) */

bool Assembly-CSharp.dll::WebGLSupport::Detail::RebuildChecker::RebuildChecker_NeedRebuild
               (RebuildChecker *this,bool debug,MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__WebGLSupport__IInputField);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_beforeCaretPosition____0______1_);
    func_?(&StringLiteral_beforeString____0______1_);
    func_?(&StringLiteral_beforeSelectionAnchorPosition___);
    func_?(&StringLiteral_beforeSelectionFocusPosition____);
    cRam_? = '\x01';
  }
  pRVar2 = this;
  pIVar3 = (this->fields).input;
  pSVar4 = (this->fields).beforeString;
  if (pIVar3 != (IInputField *)0x0) {
    b = (String *)func_?(3,TypeInfo__WebGLSupport__IInputField,pIVar3);
    bVar5 = mscorlib.dll::System::String::String_op_Inequality(pSVar4,b,(MethodInfo *)0x0);
    bVar6 = debug;
    iVar7 = (uint)debug << 8;
    if (bVar5 != 0) {
      if (debug != 0) {
        pIVar3 = (pRVar2->fields).input;
        pSVar4 = (pRVar2->fields).beforeString;
        if (pIVar3 == (IInputField *)0x0) goto code_?;
        pOVar8 = (Object *)func_?(3,TypeInfo__WebGLSupport__IInputField,pIVar3);
        pSVar4 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral_beforeString____0______1_,(Object *)pSVar4,pOVar8,
                            (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar4,(MethodInfo *)0x0);
      }
      pIVar3 = (pRVar2->fields).input;
      if (pIVar3 == (IInputField *)0x0) goto code_?;
      pSVar4 = (String *)func_?(3,TypeInfo__WebGLSupport__IInputField,pIVar3);
      (pRVar2->fields).beforeString = pSVar4;
      func_?(&(pRVar2->fields).beforeString,pSVar4);
      iVar7 = CONCAT31((uint3)bVar6,1);
    }
    pIVar3 = (pRVar2->fields).input;
    iVar9 = (pRVar2->fields).beforeCaretPosition;
    if (pIVar3 != (IInputField *)0x0) {
      iVar10 = func_?(7,TypeInfo__WebGLSupport__IInputField,pIVar3);
      if (iVar9 != iVar10) {
        if ((char)((uint)iVar7 >> 8) != '\0') {
          this = (RebuildChecker *)(pRVar2->fields).beforeCaretPosition;
          pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&this);
          pIVar3 = (pRVar2->fields).input;
          if (pIVar3 == (IInputField *)0x0) goto code_?;
          uStack_1 = func_?(7,TypeInfo__WebGLSupport__IInputField,pIVar3);
          pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
          pSVar4 = mscorlib.dll::System::String::String_Format_1
                             (StringLiteral_beforeCaretPosition____0______1_,pOVar8,pOVar11,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar4,(MethodInfo *)0x0);
        }
        pIVar3 = (pRVar2->fields).input;
        if (pIVar3 == (IInputField *)0x0) goto code_?;
        iVar12 = func_?(7,TypeInfo__WebGLSupport__IInputField,pIVar3);
        (pRVar2->fields).beforeCaretPosition = iVar12;
        iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),1);
      }
      pIVar3 = (pRVar2->fields).input;
      iVar9 = (pRVar2->fields).beforeSelectionFocusPosition;
      if (pIVar3 != (IInputField *)0x0) {
        iVar10 = func_?(9,TypeInfo__WebGLSupport__IInputField,pIVar3);
        if (iVar9 != iVar10) {
          if ((char)((uint)iVar7 >> 8) != '\0') {
            this = (RebuildChecker *)(pRVar2->fields).beforeSelectionFocusPosition;
            pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&this);
            pIVar3 = (pRVar2->fields).input;
            if (pIVar3 == (IInputField *)0x0) goto code_?;
            uStack_1 = func_?(9,TypeInfo__WebGLSupport__IInputField,pIVar3);
            pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
            pSVar4 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_beforeSelectionFocusPosition____,pOVar8,pOVar11,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar4,(MethodInfo *)0x0);
          }
          pIVar3 = (pRVar2->fields).input;
          if (pIVar3 == (IInputField *)0x0) goto code_?;
          iVar12 = func_?(9,TypeInfo__WebGLSupport__IInputField,pIVar3);
          (pRVar2->fields).beforeSelectionFocusPosition = iVar12;
          iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),1);
        }
        pIVar3 = (pRVar2->fields).input;
        iVar9 = (pRVar2->fields).beforeSelectionAnchorPosition;
        if (pIVar3 != (IInputField *)0x0) {
          iVar10 = func_?(0xb,TypeInfo__WebGLSupport__IInputField,pIVar3);
          if (iVar9 != iVar10) {
            if ((char)((uint)iVar7 >> 8) != '\0') {
              this = (RebuildChecker *)(pRVar2->fields).beforeSelectionAnchorPosition;
              pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&this);
              pIVar3 = (pRVar2->fields).input;
              if (pIVar3 == (IInputField *)0x0) goto code_?;
              uStack_1 = func_?(0xb,TypeInfo__WebGLSupport__IInputField,pIVar3);
              pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&uStack_1);
              pSVar4 = mscorlib.dll::System::String::String_Format_1
                                 (StringLiteral_beforeSelectionAnchorPosition___,pOVar8,pOVar11,
                                  (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar4,(MethodInfo *)0x0);
            }
            pIVar3 = (pRVar2->fields).input;
            if (pIVar3 == (IInputField *)0x0) goto code_?;
            iVar12 = func_?(0xb,TypeInfo__WebGLSupport__IInputField,pIVar3);
            (pRVar2->fields).beforeSelectionAnchorPosition = iVar12;
            iVar7 = 1;
          }
          return (bool)iVar7;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar6 = (*pcVar13)();
  return bVar6;
}

