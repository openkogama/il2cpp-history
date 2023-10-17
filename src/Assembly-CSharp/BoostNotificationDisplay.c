
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
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(pBVar2->fields).activeBoosts;
      if (this_00 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                            );
        if (this_02 !=
            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
          Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                    );
          pTVar3 = (this->fields).boostsActive;
          IVar4.m_value = (int32_t)&UNK_?;
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (pTVar3 != (Text *)0x0) {
            (*(pTVar3->klass->vtable).set_text.methodPtr)();
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
              (*(pIVar9->klass->vtable).set_color.methodPtr)(pIVar9,fVar5,fVar6,fVar7,fVar8);
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
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar2 != (MVLocalPlayer *)0x0)) &&
     (pBVar3 = (pMVar2->fields).boostController, pBVar3 != (BoostController *)0x0)) {
    pAVar4 = (pBVar3->fields).BoostCountChanged;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)0x0,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
      if (pAVar4 == (Action *)0x0) {
        (pBVar3->fields).BoostCountChanged = (Action *)0x0;
        pBStack6 = &pBVar3->fields;
        pAStack7 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar8 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar4;
      }
      if (pAVar8 != (Action *)0x0) {
        (pBVar3->fields).BoostCountChanged = pAVar8;
        uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
        pAStack7 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAStack7 = pAVar4;
        }
        if (pAStack7 != (Action *)0x0) {
          pBStack6 = &pBVar3->fields;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?();
code_?:
  _pBStack00000024 = uVar5;
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
  IVar4.m_value = (int32_t)(pBVar3->fields).BoostCountChanged;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)IVar4.m_value,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar5 == (Action *)0x0) {
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
        this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)(pBVar3->fields).activeBoosts;
        if (this_00 !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) {
          this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                              );
          if (this_02 !=
              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
            Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
            pTVar6 = (this->fields).boostsActive;
            IVar4.m_value = (int32_t)&stack0xfffffff8;
            mscorlib.dll::System::Int32::Int32_ToString((Int32 *)IVar4.m_value,(MethodInfo *)0x0);
            if (pTVar6 != (Text *)0x0) {
              (*(pTVar6->klass->vtable).set_text.methodPtr)();
              if (IVar4.m_value < 1) {
                fVar7 = (this->fields).boostInactiveColor.r;
                fVar8 = (this->fields).boostInactiveColor.g;
                fVar9 = (this->fields).boostInactiveColor.b;
                fVar10 = (this->fields).boostInactiveColor.a;
              }
              else {
                fVar7 = (this->fields).boostActiveColor.r;
                fVar8 = (this->fields).boostActiveColor.g;
                fVar9 = (this->fields).boostActiveColor.b;
                fVar10 = (this->fields).boostActiveColor.a;
              }
              pIVar11 = (this->fields).backgroundColor;
              if (pIVar11 != (Image *)0x0) {
                (*(pIVar11->klass->vtable).set_color.methodPtr)
                          (pIVar11,fVar7,fVar8,fVar9,fVar10,
                           (pIVar11->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    pAVar12 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar12 = pAVar5;
    }
    if (pAVar12 != (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar5;
      }
      if (pAVar12 != (Action *)0x0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

