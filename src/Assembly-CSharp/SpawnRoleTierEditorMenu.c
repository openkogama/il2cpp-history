
/* Void Initialize(GamePassTier, Int32, UnityAction`1[MV.Common.GamePassTier]) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_Initialize
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,int32_t newspawnRoleCost,
               UnityAction_1_MV_Common_GamePassTier_ *ChangeTierRequirement,MethodInfo *method)

{
  (this->fields).ChangeTierRequirement = ChangeTierRequirement;
  (this->fields).spawnRoleCost = newspawnRoleCost;
  SpawnRoleTierEditorMenu_UpdateTier(this,newTier,(MethodInfo *)0x0);
  return;
}


/* Void OnTierSelected(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_OnTierSelected
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SpawnRoleTierEditorMenu_UpdateTier(this,newTier,(MethodInfo *)0x0);
  this_00 = (Action_1_UIPushOption_ *)(this->fields).ChangeTierRequirement;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,newTier,
               MethodInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>__Invoke_MV__Common__GamePassTier_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SelectTier() */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_SelectTier
               (SpawnRoleTierEditorMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleTierEditorMenu___SelectTier_c__AnonStorey0;
  this_03 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).tierSettingsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      SpawnRoleTierSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTierSettings>_SpawnRoleTierSettings_
                     );
  if (this_03 != (ScaleAnimationBase *)0x0) {
    (this_03->fields)._._._._.m_CachedPtr = pXVar1;
    bVar2 = (this->fields).currentTier;
    bVar3 = (this->fields).canSelectTier0;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__SpawnRoleTierEditorMenu__OnTierSelected_MV__Common__GamePassTier_,
               MethodInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>__UnityAction_System__Object__void__
              );
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      if (cRam_? == '\0') {
        pUVar4 = _UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                (pXVar1->fields).layersToRender;
      (pXVar1->fields).isParticlesPlaying = bVar3;
      (pXVar1->fields).previewTexture = (RenderTexture *)pUVar4;
      if (this_00 != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
        pGVar5 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_00,(uint)bVar2,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                           );
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
          bVar3 = (bool)pGVar5;
          this_01 = (pXVar1->fields).previewCam;
          if (this_01 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)this_01,bVar3,(MethodInfo *)0x0);
            this_02 = (pXVar1->fields).xpBoostParticles;
            if (this_02 != (ParticleSystem *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        ((GameObject *)this_02,bVar3 == 0,(MethodInfo *)0x0);
              pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)this_03,
                         MethodInfo__SpawnRoleTierEditorMenu___SelectTier_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar5,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateSpawnRoleCost(Int32) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
               (SpawnRoleTierEditorMenu *this,int32_t newspawnRoleCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  piVar2 = &(this->fields).spawnRoleCost;
  *piVar2 = newspawnRoleCost;
  this_00 = (this->fields).progressBar;
  if ((this->fields).currentTier == 0) {
    if (this_00 == (ProgressBar *)0x0) goto code_?;
    ProgressBar::ProgressBar_set_Progress
              (this_00,(float)newspawnRoleCost / _UNK_?,(MethodInfo *)0x0);
    this = (SpawnRoleTierEditorMenu *)*piVar2;
    pTVar3 = (pSVar1->fields).progressBarText;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    newspawnRoleCost = 100;
    arg2 = (Object *)func_?(TypeInfo__System__Int32,&newspawnRoleCost);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_1
                       (arg0,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
  }
  else {
    if (this_00 == (ProgressBar *)0x0) goto code_?;
    ProgressBar::ProgressBar_set_Progress(this_00,1.0,(MethodInfo *)0x0);
    pTVar3 = (pSVar1->fields).progressBarText;
    pSVar4 = (String *)func_?(piVar2,0);
  }
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,pSVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    (pSVar1->fields).canSelectTier0 = *piVar2 < 0x65;
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateTier
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  pSVar1 = this;
  pTVar2 = (this->fields).currentTierNumberText;
  (this->fields).currentTier = (undefined1)newTier;
  newTier = newTier & 0xff;
  uVar3 = func_?(&newTier,0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,uVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    iVar4 = (pSVar1->fields).spawnRoleCost;
    piVar5 = &(pSVar1->fields).spawnRoleCost;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pSVar1->fields).progressBar;
    *piVar5 = iVar4;
    if ((pSVar1->fields).currentTier == 0) {
      if (this_00 == (ProgressBar *)0x0) goto code_?;
      ProgressBar::ProgressBar_set_Progress(this_00,(float)iVar4 / _UNK_?,(MethodInfo *)0x0);
      this = (SpawnRoleTierEditorMenu *)*piVar5;
      pTVar2 = (pSVar1->fields).progressBarText;
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
      uStack_6 = 100;
      arg2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_6);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar7 = mscorlib.dll::System::String::String_Concat_1
                         (arg0,(Object *)::StringLiteral__,arg2,(MethodInfo *)0x0);
    }
    else {
      if (this_00 == (ProgressBar *)0x0) goto code_?;
      ProgressBar::ProgressBar_set_Progress(this_00,1.0,(MethodInfo *)0x0);
      pTVar2 = (pSVar1->fields).progressBarText;
      pSVar7 = (String *)func_?(piVar5,0);
    }
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,pSVar7,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      (pSVar1->fields).canSelectTier0 = *piVar5 < 0x65;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

