
/* Void Add(MVSkybox) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Add
               (SkyboxManager *this,MVSkybox *skybox,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (skybox == (MVSkybox *)0x0) goto code_?;
    MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags(skybox,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).mvSkyboxes;
  if (this_00 != (List_1_MVSkybox_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)skybox,
               MethodInfo__System__Collections__Generic__List<MVSkybox>__Add_MVSkybox_);
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Awake(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__SkyboxManager___Awake_m__0__,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnPostGameInitDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
  if (pMStack2 != (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
      pMVar1 = pMStack2;
    }
    if (pMVar1 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
      pMStack3 = TypeInfo__MVGameControllerBase__OnPostGameInitDelegate;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit = pMVar1;
  return;
}


/* Void CalcAndSetSkyboxSettings() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_CalcAndSetSkyboxSettings
               (SkyboxManager *this,MethodInfo *method)

{
  fogDensity = &(this->fields).targetFogDensity;
  sunAngle = &(this->fields).targetSunAngle;
  color = &(this->fields).targetColor;
  SkyboxManager_ComputeSkyboxSettings(this,color,sunAngle,fogDensity,(MethodInfo *)0x0);
  SkyboxManager_SetColor(this,*color,*sunAngle,*fogDensity,(MethodInfo *)0x0);
  return;
}


/* Void ComputeSkyboxSettings(Color ByRef, Single ByRef, Single ByRef) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_ComputeSkyboxSettings
               (SkyboxManager *this,Color *color,float *sunAngle,float *fogDensity,
               MethodInfo *method)

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
  source = (this->fields).mvSkyboxes;
  if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SkyboxManager);
  }
  if (TypeInfo__SkyboxManager->static_fields->__f__am_cache0 == (Func_2_MVSkybox_Boolean_ *)0x0) {
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Func<MVSkybox,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)0x0,MethodInfo__SkyboxManager___ComputeSkyboxSettings_m__1_MVSkybox_
               ,MethodInfo__System__Func<MVSkybox,_bool>__Func_System__Object__void__);
    if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__SkyboxManager);
    }
    TypeInfo__SkyboxManager->static_fields->__f__am_cache0 = (Func_2_MVSkybox_Boolean_ *)pUVar4;
  }
  if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SkyboxManager);
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                        ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)TypeInfo__SkyboxManager->static_fields->__f__am_cache0,
                         System__Collections__Generic__IEnumerable<MVSkybox>_MethodInfo__System__Linq__Enumerable__Where<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_bool>_
                        );
  iVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_6
                    ((IEnumerable_1_MVSkybox_ *)source_00,
                     int_MethodInfo__System__Linq__Enumerable__Count<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>_
                    );
  if (iVar5 == 0) {
    if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar6 = TypeInfo__SkyboxManager->static_fields;
    fVar7 = (pSVar6->defaultColor).g;
    fVar8 = (pSVar6->defaultColor).b;
    fVar9 = (pSVar6->defaultColor).a;
    color->r = (pSVar6->defaultColor).r;
    color->g = fVar7;
    color->b = fVar8;
    color->a = fVar9;
    *fogDensity = 0.007;
    *sunAngle = 80.0;
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__SkyboxManager->static_fields->__f__am_cache1 == (Func_2_MVSkybox_Single_ *)0x0) {
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)0x0,MethodInfo__SkyboxManager___ComputeSkyboxSettings_m__2_MVSkybox_
               ,MethodInfo__System__Func<MVSkybox,_float>__Func_System__Object__void__);
    if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__SkyboxManager->static_fields->__f__am_cache1 = (Func_2_MVSkybox_Single_ *)pUVar4;
  }
  if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar10 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                     ((IEnumerable_1_System_Object_ *)source_00,
                      (Func_2_Object_Single_ *)
                      TypeInfo__SkyboxManager->static_fields->__f__am_cache1,
                      System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                     );
  fVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average(pIVar10,(MethodInfo *)0x0);
  *sunAngle = fVar7;
  pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_black
                     ((Color *)&stack0xffffffb0,(MethodInfo *)0x0);
  fVar7 = pCVar11->r;
  fVar8 = pCVar11->g;
  fVar9 = pCVar11->b;
  if (source_00 != (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    fVar12 = fVar7;
    fVar13 = fVar8;
    piVar14 = (int *)func_?();
    uStack_1 = 0;
    while (piVar14 != (int *)0x0) {
      cVar15 = func_?();
      if (cVar15 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar14 != (int *)0x0) {
          func_?();
        }
        color->r = fVar12;
        color->g = fVar13;
        color->b = fVar9;
        color->a = 1.0;
        if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__SkyboxManager->static_fields->__f__am_cache2 == (Func_2_MVSkybox_Single_ *)0x0
           ) {
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)0x0,
                     MethodInfo__SkyboxManager___ComputeSkyboxSettings_m__3_MVSkybox_,
                     MethodInfo__System__Func<MVSkybox,_float>__Func_System__Object__void__);
          if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
            func_?();
          }
          TypeInfo__SkyboxManager->static_fields->__f__am_cache2 = (Func_2_MVSkybox_Single_ *)pUVar4
          ;
        }
        if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar10 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                           ((IEnumerable_1_System_Object_ *)source_00,
                            (Func_2_Object_Single_ *)
                            TypeInfo__SkyboxManager->static_fields->__f__am_cache2,
                            System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                           );
        fVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                           (pIVar10,(MethodInfo *)0x0);
        *fogDensity = fVar7;
        goto code_?;
      }
      uVar16 = 0;
      uVar17 = *(ushort *)(*piVar14 + 0xb6);
      if (uVar17 != 0) {
        do {
          if (*(IEnumerator_1_MVSkybox___Class **)(*(int *)(*piVar14 + 0x58) + (uint)uVar16 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<MVSkybox>) {
            puVar18 = (undefined4 *)
                      (*piVar14 +
                      (*(int *)(*(int *)(*piVar14 + 0x58) + 4 + (uint)uVar16 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar17);
      }
      puVar18 = (undefined4 *)func_?();
code_?:
      this_00 = (MVSkybox *)(*(code *)*puVar18)();
      if (this_00 == (MVSkybox *)0x0) break;
      pCVar11 = MVSkybox::MVSkybox_get_SkyboxColor
                         ((Color *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
      pCVar11 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Division
                                  ((Vector4 *)&puStack_19,(Vector4)*pCVar11,(float)iVar5,
                                   (MethodInfo *)0x0);
      a.g = fVar8;
      a.r = fVar7;
      a.b = pCVar11->r;
      a.a = pCVar11->g;
      pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Addition
                         ((Color *)&stack0xffffff80,a,*pCVar11,(MethodInfo *)0x0);
      fVar7 = pCVar11->r;
      fVar8 = pCVar11->g;
      fVar9 = pCVar11->b;
      fVar12 = fVar7;
      fVar13 = fVar8;
    }
  }
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Disable
               (SkyboxManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields._items = (Color32__Array *)0x0;
  LStack_6.fields._size = 0;
  func_?();
  this_00 = (this->fields).sunLight;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (Light *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).mvSkyboxes;
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_01,
                          MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__)
      ;
      LStack_6.klass = (List_1_UnityEngine_Color32___Class *)pLVar8->l;
      LStack_6.monitor = (MonitorData *)pLVar8->next;
      LStack_6.fields._items = (Color32__Array *)pLVar8->ver;
      LStack_6.fields._size = (pLVar8->current).rgba;
      uStack_1 = 0;
      while( true ) {
        auStack_9._4_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__;
        auStack_9._0_4_ = &LStack_6;
        cVar10 = func_?();
        if (cVar10 == '\0') {
          *puStack_7 = 0x4a;
          uStack_1 = 0xffffffff;
          func_?(&LStack_6);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_02 = (MVSkybox *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__get_Current__
                            );
        if (this_02 == (MVSkybox *)0x0) break;
        MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags(this_02,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* IEnumerator DoAnimate() */

IEnumerator *
Assembly-CSharp.dll::SkyboxManager::SkyboxManager_DoAnimate(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SkyboxManager___DoAnimate_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).OnScaleAnimationStopped =
         (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Initialize
               (SkyboxManager *this,MethodInfo *method)

{
  fogDensity = &(this->fields).targetFogDensity;
  sunAngle = &(this->fields).targetSunAngle;
  color = &(this->fields).targetColor;
  SkyboxManager_ComputeSkyboxSettings(this,color,sunAngle,fogDensity,(MethodInfo *)0x0);
  SkyboxManager_SetColor(this,*color,*sunAngle,*fogDensity,(MethodInfo *)0x0);
  (this->fields).initialized = 1;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_OnEnable
               (SkyboxManager *this,MethodInfo *method)

{
  sunAngle = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pCStack_2 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  pMStack_3 = (MonitorData *)0x0;
  puVar4 = (undefined4 *)&stack0xffffffb0;
  func_?();
  this_00 = (this->fields).sunLight;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).mvSkyboxes;
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_01,
                          MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__)
      ;
      pCStack_2 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar5->l;
      pMStack_3 = (MonitorData *)pLVar5->next;
      while (cVar6 = func_?(), cVar6 != '\0') {
        this_02 = (MVSkybox *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&pCStack_2
                             ,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__get_Current__
                            );
        if (this_02 == (MVSkybox *)0x0) goto code_?;
        MVSkybox::MVSkybox_SetDefaultInteractionFlags(this_02,(MethodInfo *)0x0);
      }
      *puVar4 = 0x4a;
      func_?(&pCStack_2);
      if (iVar1 == 0) {
        if ((this->fields).pendingLateInitialization == 0) {
          if ((this->fields).initialized == 0) goto code_?;
        }
        else {
          pCVar7 = &(this->fields).targetColor;
          SkyboxManager_ComputeSkyboxSettings
                    (this,pCVar7,&(this->fields).targetSunAngle,&(this->fields).targetFogDensity,
                     (MethodInfo *)0x0);
          SkyboxManager_SetColor
                    (this,*pCVar7,(this->fields).targetSunAngle,(this->fields).targetFogDensity,
                     (MethodInfo *)0x0);
          (this->fields).initialized = 1;
        }
        pCVar7 = &(this->fields).targetColor;
        SkyboxManager_ComputeSkyboxSettings
                  (this,pCVar7,&(this->fields).targetSunAngle,&(this->fields).targetFogDensity,
                   (MethodInfo *)0x0);
        sunAngle = (this->fields).targetSunAngle;
        SkyboxManager_SetColor
                  (this,*pCVar7,sunAngle,(this->fields).targetFogDensity,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = sunAngle;
        return;
      }
      goto code_?;
    }
  }
code_?:
  iVar1 = func_?();
code_?:
  func_?(iVar1,0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RefreshColor() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_RefreshColor
               (SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    SkyboxManager_ComputeSkyboxSettings
              (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
               &(this->fields).targetFogDensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
              ((MonoBehaviour *)this,StringLiteral_DoAnimate,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
              ((MonoBehaviour *)this,StringLiteral_DoAnimate,(MethodInfo *)0x0);
  }
  return;
}


/* Void Remove(MVSkybox) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Remove
               (SkyboxManager *this,MVSkybox *skybox,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).mvSkyboxes;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = MethodInfo__System__Collections__Generic__List<MVSkybox>__Remove_MVSkybox_;
    item.rgba = (int32_t)skybox;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__Remove(this_00,item,unaff_EBP);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetAmbientLight() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_ResetAmbientLight(MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  puStack_3 = (undefined *)0x0;
  fVar4 = 0.0;
  func_?(&uStack_1,0x3f0b8b8c,0x3f129293,0x3f20a0a1,0x3f800000,0);
  value.g = (float)uStack_2;
  value.r = (float)uStack_1;
  value.b = (float)puStack_3;
  value.a = fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            (value,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientIntensity
            (1.0,(MethodInfo *)0x0);
  return;
}


/* Void SetColor(Color, Single, Single) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_SetColor
               (SkyboxManager *this,Color color,float sunAngle,float fogDensity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentColor.r = color.r;
  (this->fields).currentColor.g = color.g;
  (this->fields).currentColor.b = color.b;
  (this->fields).currentColor.a = color.a;
  (this->fields).currentSunAngle = sunAngle;
  (this->fields).currentFogDensity = fogDensity;
  fVar1 = (float10)func_?(&color,0);
  fVar2 = (float)fVar1;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                     (0.0,0.7,fVar2,(MethodInfo *)0x0);
  fVar4 = color.a;
  fVar5 = color.b;
  fVar3 = fVar3 / _UNK_?;
  if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
    func_?();
  }
  a_00.g = 0.0;
  a_00.r = fVar3;
  a_00.b = fVar5;
  a_00.a = fVar4;
  pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                     ((Color *)&stack0xffffffe8,a_00,
                      TypeInfo__SkyboxManager->static_fields->brightAmbient,fVar3,(MethodInfo *)0x0
                     );
  fVar3 = pCVar6->r;
  fVar5 = pCVar6->g;
  fVar4 = pCVar6->b;
  fVar7 = pCVar6->a;
  color.b = 0.0;
  color.g = 0.9;
  color.r = (float)&UNK_?;
  color.a = fVar2;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                     (0.9,0.0,fVar2,(MethodInfo *)0x0);
  color.a = 1.4013e-45;
  color.b = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fog
            (1,(MethodInfo *)0x0);
  color.a = 4.2039e-45;
  color.b = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogMode
            (FogMode__Enum_ExponentialSquared,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogStartDistance
            (400.0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogEndDistance
            (500.0,(MethodInfo *)0x0);
  value.g = color.g;
  value.r = color.r;
  value.b = color.b;
  value.a = color.a;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
            (value,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogDensity
            (fogDensity,(MethodInfo *)0x0);
  a.g = fVar5;
  a.r = fVar3;
  a.b = fVar4;
  a.a = fVar7;
  pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Multiply_2
                     ((Color *)&stack0xffffffe8,fVar2 * _UNK_? + _UNK_?,a,
                      (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            (*pCVar6,(MethodInfo *)0x0);
  pLVar8 = (this->fields).sunLight;
  if (pLVar8 != (Light *)0x0) {
    this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pLVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                       ((Quaternion *)&stack0xffffffe8,0.0,45.0,0.0,(MethodInfo *)0x0);
    if (this_04 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_04,*pQVar9,(MethodInfo *)0x0);
      pLVar8 = (this->fields).sunLight;
      dVar10 = (double)((this->fields).currentSunAngle - _UNK_?);
      fVar2 = (float)(double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_?,
                                       SUB84(dVar10,0) & _UNK_?);
      if (_UNK_? < fVar2) {
        if (pLVar8 == (Light *)0x0) goto code_?;
        fVar2 = 0.0;
      }
      else {
        this_00 = (this->fields).lightDuskDawnFalloff;
        if ((this_00 == (AnimationCurve *)0x0) ||
           (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                     AnimationCurve_Evaluate(this_00,fVar2 / _UNK_?,(MethodInfo *)0x0),
           pLVar8 == (Light *)0x0)) goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                (pLVar8,fVar2,(MethodInfo *)0x0);
      fVar3 = color.a;
      fVar2 = (this->fields).skyContrast;
      fVar4 = (float)((uint)fVar2 ^ _UNK_?);
      fVar5 = fVar4;
      if (color.r <= _UNK_?) {
        fVar5 = fVar2;
      }
      fVar7 = fVar4;
      if (color.g <= _UNK_?) {
        fVar7 = fVar2;
      }
      if (_UNK_? < color.b) {
        fVar2 = fVar4;
      }
      this_01 = (this->fields).targetCamera;
      fVar4 = color.r + fVar5;
      color.r = color.r - fVar5;
      fVar5 = color.g + fVar7;
      color.g = color.g - fVar7;
      fVar7 = color.b + fVar2;
      color.b = color.b - fVar2;
      if (this_01 != (Camera *)0x0) {
        value_00.g = color.g;
        value_00.r = color.r;
        value_00.b = color.b;
        value_00.a = color.a;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                  (this_01,value_00,(MethodInfo *)0x0);
        this_02 = (this->fields).horizontalPlane;
        if ((this_02 != (MeshRenderer *)0x0) &&
           (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)this_02,(MethodInfo *)0x0), this_05 != (Material *)0x0)
           ) {
          value_01.y = fVar5;
          value_01.x = fVar4;
          value_01.z = fVar7;
          value_01.w = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_05,StringLiteral__Color,value_01,(MethodInfo *)0x0);
          this_03 = (UnityAction_1_UnityEngine_Color_ *)(this->fields).OnSkyboxColorChanged;
          if (this_03 != (UnityAction_1_UnityEngine_Color_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
            UnityAction_1_UnityEngine_Color__Invoke
                      (this_03,(this->fields).currentColor,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <Awake>m__0() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__Awake_m__0
               (SkyboxManager *this,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields).pendingLateInitialization = 1;
    return;
  }
  fogDensity = &(this->fields).targetFogDensity;
  sunAngle = &(this->fields).targetSunAngle;
  color = &(this->fields).targetColor;
  SkyboxManager_ComputeSkyboxSettings(this,color,sunAngle,fogDensity,(MethodInfo *)0x0);
  this_00 = (SkyboxManager *)*fogDensity;
  SkyboxManager_SetColor(this_00,*color,*sunAngle,(float)this_00,(MethodInfo *)0x0);
  (this_00->fields).initialized = 1;
  return;
}


/* Boolean <ComputeSkyboxSettings>m__1(MVSkybox) */

bool Assembly-CSharp.dll::SkyboxManager::SkyboxManager__ComputeSkyboxSettings_m__1
               (MVSkybox *s,MethodInfo *method)

{
  if (s == (MVSkybox *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar3 = (s->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar3 != (IInputSignalReceiver *)0x0) {
    bVar2 = func_?(1,TypeInfo__IInputSignalReceiver,pIVar3);
    return bVar2;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Single <ComputeSkyboxSettings>m__2(MVSkybox) */

float Assembly-CSharp.dll::SkyboxManager::SkyboxManager__ComputeSkyboxSettings_m__2
                (MVSkybox *s,MethodInfo *method)

{
  if (s == (MVSkybox *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float10)(*pcVar1)();
    return (float)fVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
          *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)s,(MethodInfo *)0x0);
  if (this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this,StringLiteral_sunAngle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_sun,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_00 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)s,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack4 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_00,(Type *)StringLiteral_sunAngle,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar5 = CONCAT44(TypeInfo__System__Single,pPStack4);
      if (pPStack4 != (Pool *)0x0) {
        if ((pPStack4->klass->_0).element_class ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar6 = (float *)func_?();
          return *pfVar6;
        }
        goto code_?;
      }
    }
  }
  pPStack4 = (Pool *)0x0;
  uVar5 = func_?();
code_?:
  _puStack0000001c = uVar5;
  func_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float10)(*pcVar1)();
  return (float)fVar2;
}


/* Single <ComputeSkyboxSettings>m__3(MVSkybox) */

float Assembly-CSharp.dll::SkyboxManager::SkyboxManager__ComputeSkyboxSettings_m__3
                (MVSkybox *s,MethodInfo *method)

{
  if (s == (MVSkybox *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float10)(*pcVar1)();
    return (float)fVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
          *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)s,(MethodInfo *)0x0);
  if (this != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this,StringLiteral_fogDensity,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_fog,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_00 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)s,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack4 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_00,(Type *)StringLiteral_fogDensity,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar5 = CONCAT44(TypeInfo__System__Single,pPStack4);
      if (pPStack4 != (Pool *)0x0) {
        if ((pPStack4->klass->_0).element_class ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar6 = (float *)func_?();
          return *pfVar6;
        }
        goto code_?;
      }
    }
  }
  pPStack4 = (Pool *)0x0;
  uVar5 = func_?();
code_?:
  _puStack0000001c = uVar5;
  func_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float10)(*pcVar1)();
  return (float)fVar2;
}


/* SkyboxManager() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  func_?(&fStack_1,0x3ebebebf,0x3f34b4b5,0x3f7efeff,0);
  pSVar5 = TypeInfo__SkyboxManager->static_fields;
  (pSVar5->defaultColor).r = fStack_1;
  (pSVar5->defaultColor).g = fStack_2;
  (pSVar5->defaultColor).b = fStack_3;
  (pSVar5->defaultColor).a = fStack_4;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  func_?(&fStack_6,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  pSVar5 = TypeInfo__SkyboxManager->static_fields;
  (pSVar5->brightAmbient).r = fStack_6;
  (pSVar5->brightAmbient).g = fStack_7;
  (pSVar5->brightAmbient).b = fStack_8;
  (pSVar5->brightAmbient).a = fStack_9;
  return;
}


/* SkyboxManager() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__ctor(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).skyContrast = 0.1;
  if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SkyboxManager);
  }
  pSVar1 = TypeInfo__SkyboxManager->static_fields;
  fVar2 = (pSVar1->defaultColor).r;
  fVar3 = (pSVar1->defaultColor).g;
  fVar4 = (pSVar1->defaultColor).b;
  fVar5 = (pSVar1->defaultColor).a;
  (this->fields).currentSunAngle = 80.0;
  (this->fields).currentFogDensity = 0.007;
  (this->fields).currentColor.r = fVar2;
  (this->fields).currentColor.g = fVar3;
  (this->fields).currentColor.b = fVar4;
  (this->fields).currentColor.a = fVar5;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVSkybox>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVSkybox>__List__);
  (this->fields).mvSkyboxes = (List_1_MVSkybox_ *)this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

