
/* Void OnBoostCountChanged() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnBoostCountChanged
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pBVar2 = (pMVar1->fields).boostController, pBVar2 != (BoostController *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(pBVar2->fields).activeBoosts;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                            );
        if (this_02 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
          StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                    );
          pTVar3 = (this->fields).boostsActive;
          IVar4.m_value = (int32_t)&UNK_?;
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)();
            if (IVar4.m_value < 1) {
              fVar5 = (this->fields).boostInactiveColor.r;
              fVar6 = (this->fields).boostInactiveColor.g;
              fVar7 = (this->fields).boostInactiveColor.b;
              fVar8 = (this->fields).boostInactiveColor.a;
            }
            else {
              fVar5 = (this->fields).boostActiveColor.r;
              fVar6 = (this->fields).boostActiveColor.g;
              fVar7 = (this->fields).boostActiveColor.b;
              fVar8 = (this->fields).boostActiveColor.a;
            }
            pIVar9 = (this->fields).backgroundColor;
            if (pIVar9 != (Image *)0x0) {
              (*(code *)(pIVar9->klass->vtable).set_color.method)(pIVar9,fVar5,fVar6,fVar7,fVar8);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnDestroy
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 == (MVNetworkGame *)0x0) ||
      (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar2 == (MVLocalPlayer *)0x0)) ||
     (pBVar3 = (pMVar2->fields).boostController, pBVar3 == (BoostController *)0x0)) {
    uVar4 = func_?();
  }
  else {
    pAVar5 = (pBVar3->fields).BoostCountChanged;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,unaff_ESI,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
    if (pAVar5 == (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = (Action *)0x0;
      pBStack6 = &pBVar3->fields;
      pAStack7 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 != (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = pAVar8;
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAStack7 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAStack7 = pAVar5;
      }
      if (pAStack7 != (Action *)0x0) {
        pBStack6 = &pBVar3->fields;
        func_?();
        return;
      }
    }
  }
  _pBStack0000001c = uVar4;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_Start
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
  if ((pMVar2 == (MVLocalPlayer *)0x0) ||
     (pBVar3 = (pMVar2->fields).boostController, pBVar3 == (BoostController *)0x0))
  goto code_?;
  pAVar4 = (pBVar3->fields).BoostCountChanged;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
             (MethodInfo *)0x0);
  pAVar4 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar4 == (Action *)0x0) {
    (pBVar3->fields).BoostCountChanged = (Action *)0x0;
code_?:
    func_?();
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if ((pMVar2 != (MVLocalPlayer *)0x0) &&
         (pBVar3 = (pMVar2->fields).boostController, pBVar3 != (BoostController *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                         );
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pBVar3->fields).activeBoosts;
        if (this_00 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                              );
          if (this_02 !=
              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
            StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
            this_03.m_value = (int32_t)&stack0xfffffff8;
            pTVar5 = (this->fields).boostsActive;
            mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_03.m_value,(MethodInfo *)0x0);
            if (pTVar5 != (Text *)0x0) {
              (*(code *)(pTVar5->klass->vtable).set_text.method)();
              if (this_03.m_value < 1) {
                fVar6 = (this->fields).boostInactiveColor.r;
                fVar7 = (this->fields).boostInactiveColor.g;
                fVar8 = (this->fields).boostInactiveColor.b;
                fVar9 = (this->fields).boostInactiveColor.a;
              }
              else {
                fVar6 = (this->fields).boostActiveColor.r;
                fVar7 = (this->fields).boostActiveColor.g;
                fVar8 = (this->fields).boostActiveColor.b;
                fVar9 = (this->fields).boostActiveColor.a;
              }
              pIVar10 = (this->fields).backgroundColor;
              if (pIVar10 != (Image *)0x0) {
                (*(code *)(pIVar10->klass->vtable).set_color.method)
                          (pIVar10,fVar6,fVar7,fVar8,fVar9,
                           (pIVar10->klass->vtable).get_raycastTarget.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    pAVar11 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar4;
    }
    if (pAVar11 != (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = pAVar11;
      pAVar11 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar11 = pAVar4;
      }
      if (pAVar11 != (Action *)0x0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

