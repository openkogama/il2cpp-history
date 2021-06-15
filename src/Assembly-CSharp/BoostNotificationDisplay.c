
/* Void OnBoostCountChanged() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnBoostCountChanged
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_00 != (MVNetworkGame *)0x0) &&
       (this_01 = (PrefabPool *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_01 != (PrefabPool *)0x0)) &&
      (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                           (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) &&
     (this_03 = BoostController::BoostController_GetActiveBoosts
                          ((BoostController *)this_02,(MethodInfo *)0x0),
     this_03 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
              ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
               this_03,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
              );
    pDVar1 = this_03[1].klass;
    func_?();
    if (pDVar1 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost___Class *)0x0) {
      (*(code *)(pDVar1->_0).image[0x11].nameToClassHashTable)();
      pMVar2 = this_03[1].monitor;
      if (pMVar2 != (MonitorData *)0x0) {
        (**(code **)(*(int *)pMVar2 + 0x178))(pMVar2);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_OnDestroy
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                         (this_01,(MethodInfo *)0x0), object = TypeInfo__System__Action,
     pOVar2 != (ObjectiveArrow *)0x0)) {
    pDVar3 = (pOVar2->fields)._._._._.m_CachedPtr;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)object,MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,
               (MethodInfo *)0x0);
    pDStack4 =
         mscorlib.dll::System::Delegate::Delegate_Remove
                   (pDVar3,(Delegate *)this_02,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDStack4 != (Delegate *)0x0) {
      if ((Action__Class *)pDStack4->klass == TypeInfo__System__Action) {
        pDVar3 = pDStack4;
      }
      pAStack5 = TypeInfo__System__Action;
      if (pDVar3 == (Delegate *)0x0) goto code_?;
    }
    (pOVar2->fields)._._._._.m_CachedPtr = pDVar3;
    return;
  }
  func_?();
  pDStack4 = extraout_ECX;
  pAStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostNotificationDisplay::BoostNotificationDisplay_Start
               (BoostNotificationDisplay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pPVar2 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pPVar2 != (PrefabPool *)0x0) {
      pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar2,(MethodInfo *)0x0)
      ;
      if (pOVar3 != (ObjectiveArrow *)0x0) {
        pDVar4 = (pOVar3->fields)._._._._.m_CachedPtr;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__BoostNotificationDisplay__OnBoostCountChanged__,(MethodInfo *)0x0);
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar4,(Delegate *)this_00,(MethodInfo *)0x0);
        pDVar4 = (Delegate *)0x0;
        if (pDVar5 != (Delegate *)0x0) {
          if ((Action__Class *)pDVar5->klass == TypeInfo__System__Action) {
            pDVar4 = pDVar5;
          }
          if (pDVar4 == (Delegate *)0x0) {
            func_?(pDVar5,TypeInfo__System__Action);
            goto code_?;
          }
        }
        bVar6 = cRam_? == '\0';
        (pOVar3->fields)._._._._.m_CachedPtr = pDVar4;
        if (bVar6) {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pPVar2 = (PrefabPool *)
                   MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pPVar2 != (PrefabPool *)0x0) {
            pOVar3 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                               (pPVar2,(MethodInfo *)0x0);
            if (pOVar3 != (ObjectiveArrow *)0x0) {
              this_01 = BoostController::BoostController_GetActiveBoosts
                                  ((BoostController *)pOVar3,(MethodInfo *)0x0);
              if (this_01 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                          ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                            *)this_01,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                          );
                pTVar7 = (this->fields).boostsActive;
                iVar8 = func_?();
                if (pTVar7 != (Text *)0x0) {
                  (*(code *)(pTVar7->klass->vtable).set_text.method)(pTVar7);
                  pIVar9 = (this->fields).backgroundColor;
                  if (iVar8 < 1) {
                    fVar10 = (this->fields).boostInactiveColor.r;
                    fVar11 = (this->fields).boostInactiveColor.g;
                    fVar12 = (this->fields).boostInactiveColor.b;
                  }
                  else {
                    fVar10 = (this->fields).boostActiveColor.r;
                    fVar11 = (this->fields).boostActiveColor.g;
                    fVar12 = (this->fields).boostActiveColor.b;
                  }
                  if (pIVar9 != (Image *)0x0) {
                    (*(code *)(pIVar9->klass->vtable).set_color.method)(pIVar9,fVar10,fVar11,fVar12)
                    ;
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
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

