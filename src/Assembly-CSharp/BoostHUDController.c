
/* Void CreateActiveBoosts() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_CreateActiveBoosts
               (BoostHUDController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pLVar4 = (this->fields).currentBoosts;
  if (pLVar4 != (List_1_UnityEngine_GameObject_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                      );
    while (index = (Object *)((int)&index[-1].monitor + 3), -1 < (int)index) {
      pLVar4 = (this->fields).currentBoosts;
      if (pLVar4 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      obj = (Object_1 *)
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,(int32_t)index
                       ,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                      );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        unaff_ESI = (MVGameControllerBase__Class *)&UNK_?;
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
    }
    this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).currentBoosts;
    if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        unaff_ESI = TypeInfo__MVGameControllerBase;
        func_?();
      }
      this_02 = (PrefabPool *)
                MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_02 != (PrefabPool *)0x0) {
        method_01 = (MethodInfo *)&UNK_?;
        this_03 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                            (this_02,(MethodInfo *)0x0);
        if ((this_03 != (ObjectiveArrow *)0x0) &&
           (this_04 = BoostController::BoostController_GetActiveBoosts
                                ((BoostController *)this_03,(MethodInfo *)unaff_ESI),
           this_04 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                      *)&stack0xffffffb8,
                     (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)this_04,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                    );
          uStack_1 = 0;
          while( true ) {
            cVar5 = func_?();
            if (cVar5 == '\0') {
              uStack_1 = 0xffffffff;
              func_?();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_05 = (Collection_1_VoxelHit_ *)func_?();
            this_08 = (MethodInfo *)(this->fields).boostImageController;
            if ((this_05 == (Collection_1_VoxelHit_ *)0x0) ||
               (type = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items(this_05,in_stack_6),
               this_08 == (MethodInfo *)0x0)) break;
            original = BoostImageController::BoostImageController_GetBoostVisualization
                                 ((BoostImageController *)this_08,(BoostType__Enum)type,
                                  in_stack_7);
            in_stack_6 = this_08;
            method_00 = in_stack_8;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
              in_stack_6 = this_08;
              method_00 = in_stack_8;
            }
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)original,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                );
            in_stack_8 = (MethodInfo *)(this->fields).currentBoosts;
            if ((this_06 == (XpBoostParticlePreviewer *)0x0) ||
               (item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_06,method_00),
               in_stack_8 == (MethodInfo *)0x0)) break;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)in_stack_8,(UIPushOption__Enum)item,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            this_07 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_06,(MethodInfo *)0x0);
            this_01 = (this->fields).content;
            if ((this_01 == (HorizontalLayoutGroup *)0x0) ||
               (method_01 = (MethodInfo *)
                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this_01,method_01),
               this_07 == (Transform *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_07,(Transform *)method_01,0,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_OnDestroy
               (BoostHUDController *this,MethodInfo *method)

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
  this_00 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((this_00 != (PrefabPool *)0x0) &&
     (pOVar2 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                         (this_00,(MethodInfo *)0x0), pOVar2 != (ObjectiveArrow *)0x0)) {
    pDVar3 = (pOVar2->fields)._._._._.m_CachedPtr;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,unaff_ESI,MethodInfo__BoostHUDController__CreateActiveBoosts__,
               (MethodInfo *)0x0);
    pDStack4 =
         mscorlib.dll::System::Delegate::Delegate_Remove
                   (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
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


/* Void SetupHUD() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_SetupHUD
               (BoostHUDController *this,MethodInfo *method)

{
  BoostHUDController_CreateActiveBoosts(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (((this_01 != (PrefabPool *)0x0) &&
      (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                           (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) &&
     (this_03 = BoostController::BoostController_GetActiveBoosts
                          ((BoostController *)this_02,(MethodInfo *)0x0),
     this_03 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                        *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pTVar3 = (Transform *)0x0;
      if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar3 = pTVar2;
      }
      if (pTVar3 == (Transform *)0x0) goto code_?;
    }
    this_00 = (this->fields).slideOnClick;
    uVar4 = 0;
    puVar5 = &UNK_?;
    func_?();
    if (this_00 != (SlideOnClick *)0x0) {
      newPos.z = (float)puVar5;
      newPos.x = (float)(int)uVar4;
      newPos.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      GameMeterVisuals::SlideOnClick::SlideOnClick_SetNewStartPosition
                (this_00,newPos,(MethodInfo *)0x0);
      pCVar6 = (this->fields).canvasGroup;
      if (pCVar6 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar6,0.0,(MethodInfo *)0x0);
        if (iVar1 < 1) {
          return;
        }
        pCVar6 = (this->fields).canvasGroup;
        if (pCVar6 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar6,1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupTransform() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_SetupTransform
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (((this_01 != (PrefabPool *)0x0) &&
      (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                           (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) &&
     (this_03 = BoostController::BoostController_GetActiveBoosts
                          ((BoostController *)this_02,(MethodInfo *)0x0),
     this_03 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                        *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pTVar3 = (Transform *)0x0;
      if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar3 = pTVar2;
      }
      if (pTVar3 == (Transform *)0x0) goto code_?;
    }
    iVar4 = (this->fields).boosterWidth;
    this_00 = (this->fields).slideOnClick;
    fVar5 = (this->fields).startPos.x;
    uVar6 = CONCAT44(&stack0xfffffff0,&UNK_?);
    func_?();
    if (this_00 != (SlideOnClick *)0x0) {
      newPos.z = (float)(iVar4 * iVar1) + fVar5;
      newPos.x = (float)(int)uVar6;
      newPos.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      GameMeterVisuals::SlideOnClick::SlideOnClick_SetNewStartPosition
                (this_00,newPos,(MethodInfo *)0x0);
      pCVar7 = (this->fields).canvasGroup;
      if (pCVar7 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar7,0.0,(MethodInfo *)0x0);
        if (iVar1 < 1) {
          return;
        }
        pCVar7 = (this->fields).canvasGroup;
        if (pCVar7 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar7,1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_Start
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pOVar1 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_00,(MethodInfo *)0x0);
    if (pOVar1 != (ObjectiveArrow *)0x0) {
      pDVar2 = (pOVar1->fields)._._._._.m_CachedPtr;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__BoostHUDController__SetupHUD__,(MethodInfo *)0x0
                );
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDVar3 != (Delegate *)0x0) {
        if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
          pDVar2 = pDVar3;
        }
        pAVar4 = TypeInfo__System__Action;
        if (pDVar2 == (Delegate *)0x0) goto code_?;
      }
      *(Delegate **)(unaff_ESI + 8) = pDVar2;
      pDVar3 = (Delegate *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDVar3 != (Delegate *)0x0) {
        if (pDVar3->klass == (Delegate__Class *)TypeInfo__UnityEngine__RectTransform) {
          pDVar2 = pDVar3;
        }
        pAVar4 = (Action__Class *)TypeInfo__UnityEngine__RectTransform;
        if (pDVar2 == (Delegate *)0x0) goto code_?;
      }
      (this->fields).rectTransform = (RectTransform *)pDVar2;
      if (pDVar2 != (Delegate *)0x0) {
        VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_get_anchoredPosition((RectTransform *)pDVar2,(MethodInfo *)0x0);
        (this->fields).startPos = VVar5;
        BoostHUDController_SetupHUD(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pDVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pDVar3,pAVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* BoostHUDController() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController__ctor
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).boosterWidth = 100;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
            );
  (this->fields).currentBoosts = (List_1_UnityEngine_GameObject_ *)this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

