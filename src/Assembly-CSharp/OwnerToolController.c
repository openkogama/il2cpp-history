
/* MVPlayer GetPlayer(String) */

MVPlayer *
Assembly-CSharp.dll::OwnerToolController::OwnerToolController_GetPlayer
          (String *userName,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (this = (pMVar5->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    this_00 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_Values(this,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      uStack_1 = 1;
      pMVar7 = (MVPlayer *)pDVar6->_currentValue;
      while( true ) {
        pMVar8 = pMVar7;
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_10);
          *unaff_FS_OFFSET = uStack_3;
          return (MVPlayer *)0x0;
        }
        if ((pMVar8 == (MVPlayer *)0x0) ||
           (pUVar11 = (pMVar8->fields)._UserProfileData_k__BackingField,
           pUVar11 == (UserProfileData *)0x0)) break;
        pMVar7 = (MVPlayer *)userName;
        bVar9 = mscorlib.dll::System::String::String_op_Equality
                          ((pUVar11->fields).UserName,userName,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_12);
          *unaff_FS_OFFSET = uStack_3;
          return pMVar8;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pMVar7 = (MVPlayer *)(*pcVar13)();
  return pMVar7;
}


/* Void Initialize(String) */

void Assembly-CSharp.dll::OwnerToolController::OwnerToolController_Initialize
               (OwnerToolController *this,String *playerNameString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_will_be_kicked_and_unable_to_rej);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,playerNameString,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).text;
    pSVar2 = TM::TM__(StringLiteral_will_be_kicked_and_unable_to_rej,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (playerNameString,::StringLiteral__,pSVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnKickClicked() */

void Assembly-CSharp.dll::OwnerToolController::OwnerToolController_OnKickClicked
               (OwnerToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Player_is_not_present_in_session);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    userName = (String *)
               (*(code *)(pTVar1->klass->vtable).get_text.method)
                         (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    player = OwnerToolController_GetPlayer(userName,(MethodInfo *)0x0);
    if (player == (MVPlayer *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Player_is_not_present_in_session,(MethodInfo *)0x0);
      return;
    }
    OwnerOps::OwnerOps_RevokeEditRightsAndKick((MonoBehaviour *)this,player,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

