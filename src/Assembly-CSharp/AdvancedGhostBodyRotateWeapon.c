
/* Void Attack(Int32) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Attack
               (AdvancedGhostBodyRotateWeapon *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_02 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_01,woid,(MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClient *)0x0) {
    pTVar2 = (this->fields).timeoutMap;
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
    if (pTVar2 == (TimeoutMap *)0x0) goto code_?;
    bVar4 = TimeoutMap::TimeoutMap_Contains(pTVar2,(int32_t)pIVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                    (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 != (MVNetworkGame *)0x0) {
          pSVar6 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
          actorNumber = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                        TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                        TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                  ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,
                                   (MethodInfo *)0x0);
          if (pSVar6 != (SkyParam *)0x0) {
            MVar7 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                              ((MVTeamManager *)pSVar6,(int32_t)actorNumber,(MethodInfo *)0x0);
            if (MVar7 == (this->fields).alliedTeam) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar5 == (MVNetworkGame *)0x0) ||
                 (pSVar6 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                     ((DayNightCycle *)pMVar5,(MethodInfo *)0x0),
                 pSVar6 == (SkyParam *)0x0)) goto code_?;
              MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar6,(MethodInfo *)0x0);
            }
            puVar8 = (undefined8 *)(*(code *)(this_02->klass->vtable).GetTargetPosition.method)();
            uVar9 = *puVar8;
            method_00 = *(MethodInfo **)(puVar8 + 1);
            this_05 = this;
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,method_00);
            if ((this_03 != (GameObject *)0x0) &&
               (this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(this_03,(MethodInfo *)0x0),
               this_04 != (Transform *)0x0)) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffc8,this_04,(MethodInfo *)0x0);
              b = *pVVar10;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              woid = (int32_t)uVar9;
              a.z = (float)method_00;
              a.x = (float)(int)uVar9;
              a.y = (float)(int)((ulonglong)uVar9 >> 0x20);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffc8,a,b,(MethodInfo *)0x0);
              pVVar10 = (Vector3 *)func_?();
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)&stack0xffffffc8,*pVVar10,(this->fields).impulseStrength
                                  ,(MethodInfo *)0x0);
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)&stack0xffffffc8,*pVVar10,(this->fields).factor,
                                  (MethodInfo *)0x0);
              pIVar11 = AdvancedGhostBodyRotateWeaponPackage::
                        AdvancedGhostBodyRotateWeaponPackage_Create
                                  ((InteractionData *)&stack0xffffffc0,(float)woid,*pVVar10,
                                   (MethodInfo *)0x0);
              if (this_05 != (AdvancedGhostBodyRotateWeapon *)0x0) {
                bVar4 = InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                                  ((InteractionDataHandlerBase *)this_05,*pIVar11,1,
                                   (MethodInfo *)0x0);
                if (bVar4 == 0) {
                  return;
                }
                pTVar2 = (this->fields).timeoutMap;
                pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
                if (pTVar2 != (TimeoutMap *)0x0) {
                  TimeoutMap::TimeoutMap_Add(pTVar2,(int32_t)pIVar3,(MethodInfo *)0x0);
                  this_00 = (this->fields).weaponHitSound;
                  if (this_00 != (AudioSource *)0x0) {
                    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                              (this_00,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_WorldObject_does_not_have_intera,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Init(AudioSource, MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Init
               (AdvancedGhostBodyRotateWeapon *this,AudioSource *weaponHitSound,
               MVCubeModelBase *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).weaponHitSound = weaponHitSound;
  if (body != (MVCubeModelBase *)0x0) {
    pAVar1 = (body->fields).Changed;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_,
               MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__)
    ;
    pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
    if (pAVar2 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action<CubeModelChangedEventArgs>) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
    }
    (body->fields).Changed = pAVar1;
    AdvancedGhostBodyRotateWeapon_SetupWeaponCollision(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupWeaponCollision() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::
     AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar2 = (undefined4 *)&stack0xffffffd4;
  func_?();
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).ghostTriggers;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Clear__);
    uVar3 = 0;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_02 == (Transform *)0x0) goto code_?;
    pIVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                       (this_02,(MethodInfo *)0x0);
    while (pIVar4 != (IEnumerator *)0x0) {
      cVar5 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar4);
      if (cVar5 == '\0') {
        *puVar2 = 0x99;
        iVar6 = func_?(pIVar4,TypeInfo__System__IDisposable);
        if (iVar6 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar6);
        }
        *unaff_FS_OFFSET = puStack_1;
        return;
      }
      pCVar7 = (Component_1 *)func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar4);
      unaff_EDI = TypeInfo__UnityEngine__Transform;
      if (pCVar7 == (Component_1 *)0x0) break;
      bVar8 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
      if (((pCVar7->klass->_1).naturalAligment < bVar8) ||
         ((pCVar7->klass->_1).typeHierarchy[bVar8 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      this_04 = (Component_1 *)0x0;
      if (bVar9) {
        this_04 = pCVar7;
      }
      if (this_04 == (Component_1 *)0x0) goto code_?;
      unaff_EDI = (Transform__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                            (this_04,
                             UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                            );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                            (this_04,
                             UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                            );
        uVar3 = 0;
        if (this_03 == (MVInteractableBase *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                  ((Collider *)this_03,1,(MethodInfo *)0x0);
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (this_04,(MethodInfo *)0x0);
        if (pGVar11 == (GameObject *)0x0) break;
        unaff_EDI = (Transform__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                              (pGVar11,
                               AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                              );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        puVar2 = (undefined4 *)0x0;
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)unaff_EDI,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (this_04,(MethodInfo *)0x0);
          if (pGVar11 == (GameObject *)0x0) break;
          unaff_EDI = (Transform__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_AddComponent_85
                                (pGVar11,
                                 AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                                );
        }
        this_01 = (this->fields).ghostTriggers;
        if (this_01 == (List_1_AdvancedGhostTriggerBase_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)unaff_EDI,
                   MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                  );
      }
    }
  }
  uVar3 = 0;
code_?:
  func_?(uVar3);
  pCVar7 = extraout_EDX;
code_?:
  func_?(pCVar7,unaff_EDI);
  func_?(unaff_EDI,0,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Update
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

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
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  if ((this->fields).factor <= 0.0) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_00 = (this->fields).timeoutMap;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (TimeoutMap *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    TimeoutMap::TimeoutMap_Update(this_00,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).ghostTriggers;
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_01,
                          MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__GetEnumerator__
                         );
      CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l
      ;
      CStack_6.monitor = (MonitorData *)pLVar8->next;
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
      CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
      uStack_1 = 0;
      while (cVar9 = func_?(), cVar9 != '\0') {
        this_02 = (AdvancedGhostTriggerBase *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__get_Current__
                            );
        if (this_02 == (AdvancedGhostTriggerBase *)0x0) goto code_?;
        pIVar10 = AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_get_AttackTargets
                           (this_02,(MethodInfo *)0x0);
        iVar11 = 0;
        while( true ) {
          if (pIVar10 == (Int32__Array *)0x0) goto code_?;
          if ((int)pIVar10->max_length <= iVar11) break;
          woid = func_?();
          AdvancedGhostBodyRotateWeapon_Attack(this,woid,(MethodInfo *)0x0);
          iVar11 = iVar11 + 1;
        }
      }
      *puStack_7 = 0x7f;
      uStack_1 = 0xffffffff;
      func_?();
      goto code_?;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* AdvancedGhostBodyRotateWeapon() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon__ctor
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).damage = 55.0;
  (this->fields).impulseStrength = 2500.0;
  (this->fields).factor = 1.0;
  this_00 = (TimeoutMap *)func_?(TypeInfo__TimeoutMap);
  TimeoutMap::TimeoutMap__ctor(this_00,0.5,(MethodInfo *)0x0);
  (this->fields).timeoutMap = this_00;
  (this->fields).alliedTeam = 4;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__List__);
  (this->fields).ghostTriggers = (List_1_AdvancedGhostTriggerBase_ *)this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Void body_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_body_Changed
               (AdvancedGhostBodyRotateWeapon *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  AdvancedGhostBodyRotateWeapon_SetupWeaponCollision(this,(MethodInfo *)0x0);
  return;
}

