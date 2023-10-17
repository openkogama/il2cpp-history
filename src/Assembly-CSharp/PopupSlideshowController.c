
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
  iVar1 = (this->fields).currentPage + dir;
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).pages
  ;
  index = iVar1 + -1;
  if ((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
     (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,(this->fields).currentPage + -1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                        ), RVar3 != (RegexCharClass_SingleRange)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)RVar3,0,(MethodInfo *)0x0);
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).pages;
    if ((pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar2,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                          ), RVar3 != (RegexCharClass_SingleRange)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)RVar3,1,(MethodInfo *)0x0);
      (this->fields).currentPage = iVar1;
      str0 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      if ((this->fields).pages != (List_1_UnityEngine_GameObject_ *)0x0) {
        str2 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4(str0,::StringLiteral__,str2,(MethodInfo *)0x0)
        ;
        (**(code **)(_UNK_? + 0x314))();
        if ((this->fields).lastPageHasPageControls == 0) {
          pLVar4 = (this->fields).pages;
          if ((pLVar4 == (List_1_UnityEngine_GameObject_ *)0x0) ||
             (pGVar5 = (this->fields).pageControls, pGVar5 == (GameObject *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,index != (pLVar4->fields)._size + -1,(MethodInfo *)0x0);
        }
        pGVar5 = (this->fields).pageLeft;
        if ((pGVar5 != (GameObject *)0x0) &&
           (pGVar5 = (GameObject *)
                     mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                               ((Void *)pGVar5,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0 < index,(MethodInfo *)0x0);
          pGVar5 = (this->fields).pageRight;
          if (pGVar5 != (GameObject *)0x0) {
            pGVar5 = (GameObject *)
                     mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                               ((Void *)pGVar5,(MethodInfo *)0x0);
            pLVar4 = (this->fields).pages;
            if ((pLVar4 != (List_1_UnityEngine_GameObject_ *)0x0) && (pGVar5 != (GameObject *)0x0))
            {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,index < (pLVar4->fields)._size + -1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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

