
/* Void Enter(MVAvatar, Int32) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_Enter
               (MVVehicleBase *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (vehicleUser != (MVAvatar *)0x0) {
    instigatorActorNr =
         (String *)
         UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)vehicleUser,(MethodInfo *)0x0);
    (*(code *)(vehicleUser->klass->vtable).BeforeVehicleEntered.method)
              (vehicleUser,(vehicleUser->klass->vtable).OnEnterVehicle.methodPtr);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_01 != (MVNetworkGame *)0x0) &&
       (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       this_02 != (MVLocalPlayer *)0x0)) {
      pSVar1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
      this_00 = (this->fields).seatManager;
      if (this_00 != (VehicleSeatManager *)0x0) {
        VehicleSeatManager::VehicleSeatManager_AttachWorldObjectToSeat
                  (this_00,(int32_t)instigatorActorNr,pSVar1 == instigatorActorNr,vehicleUser,seatID
                   ,(MethodInfo *)0x0);
        pMVar2 = (this->fields).localObjects;
        if (pSVar1 != instigatorActorNr) {
          if (pMVar2 != (MVVehicleBase_LocalObjectsBase *)0x0) {
            (*(code *)(pMVar2->klass->vtable).Destroy.method)
                      (pMVar2,(pMVar2->klass->vtable).Enter.methodPtr);
            (this->fields).localObjects = (MVVehicleBase_LocalObjectsBase *)0x0;
          }
code_?:
          (*(code *)(vehicleUser->klass->vtable).OnEnterVehicle.method)
                    (vehicleUser,(vehicleUser->klass->vtable).OnLeaveVehicle.methodPtr);
          (*(code *)(this->klass->vtable).VehicleEntered.method)
                    (this,vehicleUser,seatID,this->klass[1]._0.image);
          return;
        }
        if (pMVar2 == (MVVehicleBase_LocalObjectsBase *)0x0) {
          uVar3 = func_?(vehicleUser,TypeInfo__MVAvatarLocal);
          pMVar2 = (MVVehicleBase_LocalObjectsBase *)
                   (*(code *)(this->klass->vtable).__unknown.method)
                             (this,seatID,uVar3,(this->klass->vtable).VehicleEntered.methodPtr);
          (this->fields).localObjects = pMVar2;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = (PrefabPool *)
                  MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((this_03 != (PrefabPool *)0x0) &&
           (this_04 = (MVLocalObjectController *)
                      PrefabPool::PrefabPool_get_MVSmokePrefab(this_03,(MethodInfo *)0x0),
           this_04 != (MVLocalObjectController *)0x0)) {
          MVLocalObjectController::MVLocalObjectController_Push
                    (this_04,(ILocalObject *)(this->fields).localObjects,(MethodInfo *)0x0);
          bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          bVar5 = (vehicleUser->klass->_1).naturalAligment;
          if ((bVar5 < bVar4) ||
             ((MVAvatarLocal__Class *)(vehicleUser->klass->_1).typeHierarchy[bVar4 - 1] !=
              TypeInfo__MVAvatarLocal)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          pMVar7 = (MVAvatar *)0x0;
          if (bVar6) {
            pMVar7 = vehicleUser;
          }
          pMVar8 = TypeInfo__MVAvatarLocal;
          if (pMVar7 == (MVAvatar *)0x0) goto code_?;
          if ((bVar5 < bVar4) ||
             ((MVAvatarLocal__Class *)(vehicleUser->klass->_1).typeHierarchy[bVar4 - 1] !=
              TypeInfo__MVAvatarLocal)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          this_05 = (MVAvatarLocal *)0x0;
          if (bVar6) {
            this_05 = (MVAvatarLocal *)vehicleUser;
          }
          if (this_05 == (MVAvatarLocal *)0x0) goto code_?;
          MVAvatarLocal::MVAvatarLocal_SetAnimation(this_05,StringLiteral_Idle,(MethodInfo *)0x0);
          pMVar2 = (this->fields).localObjects;
          if (pMVar2 != (MVVehicleBase_LocalObjectsBase *)0x0) {
            (*(code *)(pMVar2->klass->vtable).Enter.method)
                      (pMVar2,(pMVar2->klass->vtable).Leave.methodPtr);
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pMVar8 = extraout_ECX;
code_?:
  func_?(vehicleUser,pMVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_Initialize
               (MVVehicleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._.runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    pMVar1 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (this_00,StringLiteral_isDead,0.0,1,(MethodInfo *)0x0);
    (this->fields).IsVehicleDead = pMVar1;
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                          (this_01,
                           VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                          );
      (this->fields).seatManager = (VehicleSeatManager *)this_02;
      if (this_02 != (UseInteractorHandler *)0x0) {
        VehicleSeatManager::VehicleSeatManager_Init
                  ((VehicleSeatManager *)this_02,this,(this->fields).IsVehicleDead,(MethodInfo *)0x0
                  );
        pMVar2 = (this->fields)._._._.group;
        if (pMVar2 != (MVGroup *)0x0) {
          bVar3 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
          if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
             ((MVWorldObjectSpawnerVehicle__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
              TypeInfo__MVWorldObjectSpawnerVehicle)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          pMVar5 = (MVGroup *)0x0;
          if (bVar4) {
            pMVar5 = pMVar2;
          }
          if (pMVar5 != (MVGroup *)0x0) {
            (this->fields)._IsInSpawner_k__BackingField = 1;
          }
        }
        LayerUtil::LayerUtil_SetLayerRecursively_3
                  ((this->fields)._._._.transform,StringLiteral_Default,StringLiteral_Player,
                   (MethodInfo *)0x0);
        uVar6 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar7 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar7 = (uint)*piVar7 | 0xADDR;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar6;
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LeaveLocal() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_LeaveLocal
               (MVVehicleBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields).localObjects;
  if (pMVar1 != (MVVehicleBase_LocalObjectsBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).Leave.method)
              (pMVar1,(pMVar1->klass->vtable).__unknown_2.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_OnDataUpdate
               (MVVehicleBase *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_2 = (undefined *)0x0;
  stack0xffffffe8 = 0;
  ppuStack_3 = (undefined **)&stack0xffffffb0;
  func_?();
  this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_4,(MethodInfo *)0x0);
  if (this_01 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_01,StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    pDVar6 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_4,(MethodInfo *)0x0);
    if (pDVar6 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pDVar7 = (Dictionary_2_System_Type_Pool_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (pDVar6,(Type *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      pDVar6 = pDVar7;
      if (pDVar7 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar7->klass->_1).naturalAligment < bVar8) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar7->klass->_1).typeHierarchy[bVar8 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        pDVar6 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar9) {
          pDVar6 = pDVar7;
        }
        if (pDVar6 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      }
      (in_stack_4->fields).mvMovingPlatformNodePrefab = (GameObject *)pDVar6;
      if (pDVar6 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pDVar10 = (Dictionary_2_WinningConditionType_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar6,(Type *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        this_02 = pDVar10;
        if (pDVar10 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
          bVar8 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar10->klass->_1).naturalAligment < bVar8) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar10->klass->_1).typeHierarchy[bVar8 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
          if (bVar9) {
            this_02 = pDVar10;
          }
          if (this_02 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0)
          goto code_?;
        }
        (in_stack_4->fields).mvObjectEnablerPrefab = (MVObjectEnablerObject *)this_02;
        if (this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
          Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                     &stack0xffffffbc,this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                    );
          while( true ) {
            _puStack_1c = (KeyValuePair_2_System_Int32_System_Int32_)
                          CONCAT44(&stack0xffffffd0,&UNK_?);
            cVar11 = func_?();
            if (cVar11 == '\0') break;
            _puStack_1c = (KeyValuePair_2_System_Int32_System_Int32_)
                          CONCAT44((LevelRewardsManager *)&stack0xffffffd0,&UNK_?);
            _puStack_1c = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                    ((LevelRewardsManager *)&stack0xffffffd0,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                    );
            this_00 = (Dictionary_2_System_String_Theme_ *)
                      (in_stack_4->fields).mvKillLimitPrefab;
            key = (String *)func_?();
            ppuStack_3 = &puStack_2;
            value = (Theme *)func_?();
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (this_00 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      (this_00,key,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          *ppuStack_3 = (undefined *)0xab;
          _puStack_1c = (KeyValuePair_2_System_Int32_System_Int32_)
                        CONCAT44(&stack0xffffffd0,&UNK_?);
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  stack0xffffffe8 = 0;
  puStack_2 = (undefined *)unaff_ESI;
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_VisualizeBulletImpact
               (MVVehicleBase *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_06 = (MVPlayer *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    this_06 = (MVPlayer *)0x0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVAvatar *)0x0) &&
     (this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0),
     this_02 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    bVar1 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      ((MVPlayerContainer *)this_02,(int32_t)lineOfFire.m_Direction.z,
                       (MVPlayer **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (this_06 == (MVPlayer *)0x0) goto code_?;
      bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        (this_06,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pIVar2 = (this->klass->vtable).get_IsInSpawner.methodPtr;
        in_stack_3 = &UNK_?;
        cVar4 = (*(code *)(this->klass->vtable).get_IsDead.method)();
        if (cVar4 == '\0') {
          this_00 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields).vehicleBaseObject;
          if ((this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) &&
             (pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 (this_00,(MethodInfo *)0x0), pIVar5 != (IKogamaSetting *)0x0)) {
            pIVar6 = pIVar5->klass;
            uVar7 = 0;
            uVar8._0_1_ = (pIVar6->_1).rank;
            uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
            if (uVar8 != 0) {
              do {
                if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                    (Il2CppClass *)TypeInfo__IBulletImpactVisualizer) {
                  ppMVar9 = &(&(pIVar5->klass->vtable).get_Value)
                             [pIVar6->interfaceOffsets[uVar7].offset].method;
                  goto code_?;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            ppMVar9 = (MethodInfo **)func_?();
code_?:
            (*(code *)*ppMVar9)(pIVar5,in_stack_3,this,pIVar2,voxelHit.point.z,
                                voxelHit.normal.x,voxelHit.normal.y,voxelHit.normal.z,
                                voxelHit.cubePos._0_4_,voxelHit._28_4_,voxelHit.face,voxelHit._36_4_
                                ,voxelHit.woId,voxelHit.cube,voxelHit.distance,voxelHit.collider,
                                voxelHit.transform,voxelHit._60_8_,voxelHit.interactionFlags._4_4_,
                                lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,
                                lineOfFire.m_Direction._0_8_);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((this_03 != (MVNetworkGame *)0x0) &&
               (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
               this_04 != (MVLocalPlayer *)0x0)) {
              pSVar10 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_04,
                                  (MethodInfo *)0x0);
              if ((String *)lineOfFire.m_Direction.z != pSVar10) {
                return;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_05 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_PlayPlingSound(this_05,(MethodInfo *)0x0);
                pIVar11 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI
                                    ((MethodInfo *)0x0);
                if ((pIVar11 != (IPlayModeUI *)0x0) && (iVar12 = func_?(), iVar12 != 0)) {
                  func_?();
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVVehicleBase(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase__ctor
               (MVVehicleBase *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *vehiclePrefab,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,vehiclePrefab,worldObjects,(MethodInfo *)0x0);
  pVVar1 = (VehicleBaseObject *)(this->fields)._._._.component;
  if (pVVar1 == (VehicleBaseObject *)0x0) {
    pVVar2 = (VehicleBaseObject *)0x0;
  }
  else {
    bVar3 = (TypeInfo__VehicleBaseObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pVVar1->klass)->_1).naturalAligment < bVar3) ||
       ((((ObjectPrefab__Class *)pVVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__VehicleBaseObject)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pVVar2 = (VehicleBaseObject *)0x0;
    if (bVar4) {
      pVVar2 = pVVar1;
    }
    if (pVVar2 == (VehicleBaseObject *)0x0) {
      func_?();
      goto code_?;
    }
  }
  (this->fields).vehicleBaseObject = pVVar2;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,(MethodInfo *)0x0);
      pSVar6 = (String *)
               UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                ((MVWorldObjectClient *)this,pSVar5 == pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_DocumentationType
          (MVVehicleBase *this,MethodInfo *method)

{
  return (this->fields).documentationType;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_IsDead
               (MVVehicleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).IsVehicleDead;
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    pOVar1 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      goto code_?;
    }
  }
  pOVar1 = (Object *)func_?(0);
code_?:
  func_?(pOVar1);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_IsInSpawner() */

bool Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_IsInSpawner
               (MVVehicleBase *this,MethodInfo *method)

{
  return (this->fields)._IsInSpawner_k__BackingField;
}


/* VehicleVisualizationBase get_Visualization() */

VehicleVisualizationBase *
Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_get_Visualization
          (MVVehicleBase *this,MethodInfo *method)

{
  return (this->fields).visualization;
}


/* Void set_IsInSpawner(Boolean) */

void Assembly-CSharp.dll::MVVehicleBase::MVVehicleBase_set_IsInSpawner
               (MVVehicleBase *this,bool value,MethodInfo *method)

{
  (this->fields)._IsInSpawner_k__BackingField = value;
  return;
}

