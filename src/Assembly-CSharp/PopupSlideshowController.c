
/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::PopupSlideshowController::PopupSlideshowController_PageTurned
               (PopupSlideshowController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentPage;
  iVar2 = dir + iVar1;
  pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).pages
  ;
  index = iVar2 + -1;
  if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar3,iVar1 + -1,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                      );
    if (RVar4 != (RegexCharClass_SingleRange)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)RVar4,0,(MethodInfo *)0x0);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).pages;
      if (pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                          );
        if (RVar4 != (RegexCharClass_SingleRange)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)RVar4,1,(MethodInfo *)0x0);
          (this->fields).currentPage = iVar2;
          pTVar5 = (this->fields).currentPageText;
          str0 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if ((this->fields).pages != (List_1_UnityEngine_GameObject_ *)0x0) {
            str2 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            mscorlib.dll::System::String::String_Concat_4
                      (str0,::StringLiteral__,str2,(MethodInfo *)0x0);
            if (pTVar5 != (Text *)0x0) {
              (*(code *)(pTVar5->klass->vtable).set_text.method)();
              if ((this->fields).lastPageHasPageControls == 0) {
                pLVar6 = (this->fields).pages;
                if ((pLVar6 == (List_1_UnityEngine_GameObject_ *)0x0) ||
                   (pGVar7 = (this->fields).pageControls, pGVar7 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,index != (pLVar6->fields)._size + -1,(MethodInfo *)0x0);
              }
              pGVar7 = (this->fields).pageLeft;
              if (pGVar7 != (GameObject *)0x0) {
                pGVar7 = (GameObject *)
                         UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                         UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar7,(MethodInfo *)0x0);
                if (pGVar7 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar7,0 < index,(MethodInfo *)0x0);
                  pGVar7 = (this->fields).pageRight;
                  if (pGVar7 != (GameObject *)0x0) {
                    pGVar7 = (GameObject *)
                             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                             UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar7,(MethodInfo *)0x0);
                    pLVar6 = (this->fields).pages;
                    if ((pLVar6 != (List_1_UnityEngine_GameObject_ *)0x0) &&
                       (pGVar7 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar7,index < (pLVar6->fields)._size + -1,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PopupSlideshowController::PopupSlideshowController_Start
               (PopupSlideshowController *this,MethodInfo *method)

{
  (this->fields).currentPage = 1;
  PopupSlideshowController_PageTurned(this,0,(MethodInfo *)0x0);
  return;
}

