
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Awake
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  this_00 = (this->fields).audioSource;
  if (this_00 != (AudioSource *)0x0) {
    fVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_volume
                      (this_00,(MethodInfo *)0x0);
    (this->fields).maxVolume = fVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoChargingAnimation() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_DoChargingAnimation
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).chargeCurve;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pAVar1 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar1,fVar2 - (this->fields).chargeBeginTime,(MethodInfo *)0x0);
    pAVar1 = (this->fields).shakeCurve;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pAVar1 != (AnimationCurve *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (pAVar1,(fVar3 - (this->fields).chargeBeginTime) * (this->fields).shakeFrequency *
                        fVar2,(MethodInfo *)0x0);
      this_00 = (this->fields).audioSource;
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,(this->fields).maxVolume * fVar2,(MethodInfo *)0x0);
        pTVar4 = (this->fields).modelTransform;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        d = &UNK_?;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
        fVar3 = pVVar5->z;
        pVVar5 = &(this->fields).shakeDirection;
        fVar2 = pVVar5->x;
        uVar6 = CONCAT44((Vector3 *)&stack0xffffffe4,&UNK_?);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffffe4,*pVVar5,(float)d,(MethodInfo *)0x0);
        a.z = fVar3;
        a.x = (float)(int)uVar6;
        a.y = (float)(int)((ulonglong)uVar6 >> 0x20);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffe4,a,*pVVar5,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar4,*pVVar5,(MethodInfo *)0x0);
          pTVar4 = (this->fields).chargeObject;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffe4,*pVVar5,
                              fVar2 * _UNK_? + (float)&stack0xffffffe4,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar4,*pVVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Vector3 FindRayTarget(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_FindRayTarget
                    (Vector3 *__return_storage_ptr__,PickupItemImpulseGun *this,Ray lineOfFire,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff98,0,0x48);
  pHVar1 = TypeInfo__System__Collections__Generic__HashSet<int>;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  fVar2 = (this->fields).maxRange;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?(pHVar1);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  fVar4 = 0.0;
  bVar5 = CollisionDetection::CollisionDetection_MVHit_1
                    (lineOfFire,(VoxelHit *)&stack0xffffff98,fVar2,
                     (HashSet_1_System_Int32_ *)this_00,1 << ((byte)iVar3 & 0x1f),(MethodInfo *)0x0)
  ;
  if (bVar5 == 0) {
    puVar6 = (undefined8 *)func_?();
    uVar7 = *puVar6;
    fVar2 = *(float *)(puVar6 + 1);
    __return_storage_ptr__->x = (float)(int)uVar7;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = fVar4;
  __return_storage_ptr__->y = fStack_8;
  __return_storage_ptr__->z = fStack_9;
  return __return_storage_ptr__;
}


/* Void Fire(Int32, Single, Single) */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Fire
               (PickupItemImpulseGun *this,int32_t avatarId,float impulseMagnitude,
               float recoilMagnitude,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (InputToPlayerMovementAndroid__Class *)0x0;
  auStack_1._4_4_ = (MonitorData *)0x0;
  pIStack_2 = (InputToPlayerMovementAndroid__Class *)0x0;
  pMStack_3 = (MonitorData *)0x0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  func_?(&uStack_5,0,0x48);
  pMVar6 = (this->fields)._.owner;
  if (pMVar6 != (MVPickupOwner *)0x0) {
    pVVar7 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                       (&VStack_8,(InventoryItem_ItemDescription *)pMVar6,(MethodInfo *)0x0);
    uStack_9._0_4_ = pVVar7->x;
    uStack_9._4_4_ = pVVar7->y;
    fVar10 = pVVar7->z;
    pMVar6 = (this->fields)._.owner;
    if (pMVar6 != (MVPickupOwner *)0x0) {
      pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_8,pMVar6,(MethodInfo *)0x0);
      uVar11._0_4_ = pVVar7->x;
      uVar11._4_4_ = pVVar7->y;
      func_?(auStack_1,(int)uStack_9,(int)((ulonglong)uStack_9 >> 0x20),fVar10,uVar11);
      pIStack_12 = (InputToPlayerMovementAndroid__Class *)auStack_1._0_4_;
      VStack_13.x = (float)auStack_1._4_4_;
      VStack_13.y = (float)pIStack_2;
      VStack_13.z = (float)pMStack_3;
      pIStack_14 = (InputToPlayerMovementAndroid__Class *)auStack_1._0_4_;
      auStack_15._0_4_ = auStack_1._4_4_;
      auStack_15._4_4_ = pIStack_2;
      auStack_15._8_4_ = pMStack_3;
      uStack_9._0_4_ = (float)uStack_4;
      uStack_9._4_4_ = uStack_4._4_4_;
      auStack_15._12_4_ = (float)uStack_4;
      auStack_15._16_4_ = uStack_4._4_4_;
      if (cRam_? == '\0') {
        func_?();
        uStack_9._0_4_ = (float)auStack_15._12_4_;
        uStack_9._4_4_ = (float)auStack_15._16_4_;
        cRam_? = '\x01';
        pIStack_12 = pIStack_14;
        VStack_13.x = (float)auStack_15._0_4_;
        VStack_13.y = (float)auStack_15._4_4_;
        VStack_13.z = (float)auStack_15._8_4_;
      }
      pIStack_14 = pIStack_12;
      auStack_15._0_4_ = VStack_13.x;
      auStack_15._4_4_ = VStack_13.y;
      auStack_15._8_4_ = VStack_13.z;
      auStack_15._12_8_ = uStack_9;
      func_?();
      fVar10 = (this->fields).maxRange;
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Origin.y = VStack_13.x;
      ray.m_Origin.x = (float)pIStack_12;
      ray.m_Origin.z = VStack_13.y;
      ray.m_Direction.x = VStack_13.z;
      ray.m_Direction.y = (float)uStack_9;
      ray.m_Direction.z = SUB84(uStack_9,4);
      bVar17 = CollisionDetection::CollisionDetection_MVHit_1
                        (ray,(VoxelHit *)auStack_18,fVar10,(HashSet_1_System_Int32_ *)this_01,
                         1 << ((byte)iVar16 & 0x1f),(MethodInfo *)0x0);
      if (bVar17 == 0) {
        puVar19 = (undefined8 *)func_?(&VStack_8,&pIStack_14,(this->fields).maxRange,0);
        this = *(PickupItemImpulseGun **)(puVar19 + 1);
        uStack_9 = *puVar19;
      }
      else {
        uStack_9 = CONCAT44(auStack_18._4_4_,auStack_18._0_4_);
        this = (PickupItemImpulseGun *)auStack_18._8_4_;
      }
      pMVar6 = (this_00->fields)._.owner;
      if (pMVar6 != (MVPickupOwner *)0x0) {
        bVar17 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar6,(MethodInfo *)0x0);
        if (bVar17 != 0) {
          pIStack_12 = (InputToPlayerMovementAndroid__Class *)auStack_1._0_4_;
          VStack_13.x = (float)auStack_1._4_4_;
          VStack_13.y = (float)pIStack_2;
          VStack_13.z = (float)pMStack_3;
          fStack_20 = (float)uStack_4;
          pMStack_21 = (MVPickupOwner *)uStack_4._4_4_;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_02 = (List_1_UnityEngine_Vector4_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>
                                   );
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
          pMStack_22 = (MVWorldObjectClientManager *)(this_00->fields).radius;
          pMVar6 = (this_00->fields)._.owner;
          pMStack_23 = (MVWorldObjectClientManager *)(this_00->fields).maxRange;
          if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
          ignoreWoIds = (HashSet_1_System_Int32_ *)
                        (*(code *)(pMVar6->klass->vtable).get_IgnoreWOIDs.method)
                                  (pMVar6,pMVar6->klass[1]._0.image);
          iVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Player,(MethodInfo *)0x0);
          ray_00.m_Origin.y = VStack_13.x;
          ray_00.m_Origin.x = (float)pIStack_12;
          ray_00.m_Origin.z = VStack_13.y;
          ray_00.m_Direction.x = VStack_13.z;
          ray_00.m_Direction.y = fStack_20;
          ray_00.m_Direction.z = (float)pMStack_21;
          pMStack_23 = (MVWorldObjectClientManager *)
                      CollisionDetection::CollisionDetection_MVSphereCastAll
                                (ray_00,(float)pMStack_22,(float)pMStack_23,ignoreWoIds,
                                 1 << ((byte)iVar16 & 0x1f),(MethodInfo *)0x0);
          pMStack_22 = (MVWorldObjectClientManager *)0x0;
          if (pMStack_23 == (MVWorldObjectClientManager *)0x0) goto code_?;
          while( true ) {
            pMVar24 = pMStack_22;
            pOVar25 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                 pMStack_23,
                                 MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__
                                );
            if ((int)pOVar25 <= (int)pMStack_22) break;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMStack_22 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pfVar26 = (float *)func_?(&stack0xfffffeb4,pMStack_23,pMVar24,
                                               MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                              );
            auStack_18._0_4_ = *pfVar26;
            auStack_18._4_4_ = pfVar26[1];
            auStack_18._8_4_ = pfVar26[2];
            auStack_18._12_4_ = pfVar26[3];
            auStack_18._16_4_ = pfVar26[4];
            auStack_18._20_4_ = pfVar26[5];
            auStack_18._24_4_ = pfVar26[6];
            fStack_27 = pfVar26[7];
            fStack_28 = pfVar26[8];
            fStack_29 = pfVar26[9];
            fStack_30 = pfVar26[10];
            pCStack_31 = (Cube *)pfVar26[0xb];
            fStack_32 = pfVar26[0xc];
            pCStack_33 = (Collider *)pfVar26[0xd];
            pTStack_34 = (Transform *)pfVar26[0xe];
            fStack_35 = pfVar26[0xf];
            fStack_36 = pfVar26[0x10];
            fStack_37 = pfVar26[0x11];
            if (pMStack_22 == (MVWorldObjectClientManager *)0x0) goto code_?;
            item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMStack_22,(int32_t)fStack_30,(MethodInfo *)0x0);
            if (item != (MVWorldObject *)0x0) {
              if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)item,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                        );
            }
            pMStack_22 = (MVWorldObjectClientManager *)((int)&pMVar24->klass + 1);
          }
          pMStack_22 = (MVWorldObjectClientManager *)0x0;
          pMStack_23 = (MVWorldObjectClientManager *)0x0;
          if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
          while( true ) {
            pMVar24 = pMStack_23;
            pMStack_22 = pMStack_23;
            pOVar25 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02
                                 ,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                                );
            if ((int)pOVar25 <= (int)pMStack_23) break;
            this_03 = (MVWorldObjectClient *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                 (int32_t)pMVar24,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
            if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
            pMStack_23 = (MVWorldObjectClientManager *)
                        MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  (this_03,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pMStack_23,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar17 != 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar38 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar38 == (MVNetworkGame *)0x0) goto code_?;
              this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar38,(MethodInfo *)0x0);
              if (this_04 == (MVLocalPlayer *)0x0) goto code_?;
              bVar17 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                ((MVPlayer *)this_04,this_03,(MethodInfo *)0x0);
              if (bVar17 == 0) {
                lineOfFire.m_Origin.y = (float)auStack_1._4_4_;
                lineOfFire.m_Origin.x = (float)auStack_1._0_4_;
                lineOfFire.m_Origin.z = (float)pIStack_2;
                lineOfFire.m_Direction.x = (float)pMStack_3;
                lineOfFire.m_Direction.y = (float)uStack_4;
                lineOfFire.m_Direction.z = SUB84(uStack_4,4);
                pVVar7 = PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                                   (&VStack_39,(PickupItemSlapGun *)this_00,lineOfFire,
                                    (MethodInfo *)0x0);
                VStack_8.y = pVVar7->x;
                VStack_8.z = pVVar7->y;
                fVar10 = pVVar7->z;
                pMStack_21 = (MVPickupOwner *)fVar10;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                }
                a_02.z = (float)pMStack_21;
                a_02.x = VStack_8.y;
                a_02.y = VStack_8.z;
                pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   (&VStack_13,a_02,impulseMagnitude,(MethodInfo *)0x0);
                pMStack_21 = (this_00->fields)._.owner;
                pIVar40 = ImpulseHitPackage::ImpulseHitPackage_Create
                                    ((InteractionData *)auStack_15,*pVVar7,(MethodInfo *)0x0);
                if (pMStack_23 == (MVWorldObjectClientManager *)0x0) goto code_?;
                uVar41._0_1_ = pIVar40->interactionType;
                uVar41._1_1_ = pIVar40->playerKilledByType;
                uVar41._2_2_ = *(undefined2 *)&pIVar40->field_0x12;
                func_?(7,pMStack_23,pMStack_21,pIVar40->damage,(pIVar40->impulse).x,
                                (pIVar40->impulse).y,(pIVar40->impulse).z,uVar41,0);
                iVar42 = func_?(this_03,TypeInfo__IBulletImpactVisualizer);
                if (iVar42 != 0) {
                  func_?(&uStack_5,0,0x48);
                  pMVar6 = (this_00->fields)._.owner;
                  auStack_15._4_4_ = auStack_1._0_4_;
                  auStack_15._8_4_ = auStack_1._4_4_;
                  auStack_15._16_4_ = pMStack_3;
                  auStack_15._12_4_ = pIStack_2;
                  VStack_8.y = (float)uStack_4;
                  VStack_8.z = uStack_4._4_4_;
                  if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
                  this_05 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                            System.dll::System::Collections::Generic::
                            SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                            ::Single,System::Object]::
                            SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                      ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                        *)pMVar6,(MethodInfo *)0x0);
                  if (this_05 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)
                  goto code_?;
                  pOVar25 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                            TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                            TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                      (this_05,(MethodInfo *)0x0);
                  pMStack_21 = (MVPickupOwner *)pOVar25;
                  iVar42 = func_?(this_03,TypeInfo__IBulletImpactVisualizer);
                  if (iVar42 == 0) goto code_?;
                  uVar41 = func_?(this_03,TypeInfo__IBulletImpactVisualizer,uStack_5,
                                           uStack_43,uStack_44,uStack_45,uStack_46,uStack_47,
                                           uStack_48,uStack_49,uStack_50,uStack_51,uStack_52,
                                           uStack_53,uStack_54,uStack_55,uStack_56,uStack_57,
                                           uStack_58,uStack_59,auStack_15._4_4_,auStack_15._8_4_,
                                           auStack_15._12_4_,auStack_15._16_4_,VStack_8.y,
                                           VStack_8.z,pMStack_21,0);
                  func_?(0,TypeInfo__IBulletImpactVisualizer,uVar41);
                }
              }
            }
            pMStack_23 = (MVWorldObjectClientManager *)((int)&pMStack_22->klass + 1);
          }
          pMVar6 = (this_00->fields)._.owner;
          if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
          pTVar60 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pMVar6,(MethodInfo *)0x0);
          if (pTVar60 == (Transform *)0x0) goto code_?;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_13,pTVar60,(MethodInfo *)0x0);
          VStack_8.y = pVVar7->x;
          VStack_8.z = pVVar7->y;
          fVar10 = pVVar7->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                             (&VStack_13,(MethodInfo *)0x0);
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             (&VStack_13,*pVVar7,1.5,(MethodInfo *)0x0);
          a_00.z = fVar10;
          a_00.x = VStack_8.y;
          a_00.y = VStack_8.z;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_13,a_00,*pVVar7,(MethodInfo *)0x0);
          a_01.z = (float)this;
          a_01.x = (float)uStack_9;
          a_01.y = uStack_9._4_4_;
          pMStack_23 = (MVWorldObjectClientManager *)
                      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                                (a_01,*pVVar7,(MethodInfo *)0x0);
          if ((float)pMStack_23 < _UNK_?) {
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Mathf);
            }
            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                               ((float)pMStack_23 * _UNK_?,1.0,(MethodInfo *)0x0);
            pMStack_21 = (MVPickupOwner *)(recoilMagnitude / fVar10);
            if (_UNK_? < impulseMagnitude) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar38 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar38 == (MVNetworkGame *)0x0) goto code_?;
              this_06 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)CloudyTheme::CloudyTheme_get_Identifier
                                     ((CloudyTheme *)pMVar38,(MethodInfo *)0x0);
              if (this_06 ==
                  (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) goto code_?;
              this_07 = (RuntimeEventManager *)
                        System.dll::System::Collections::Generic::
                        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                        ::Single,System::Object]::
                        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                  (this_06,(MethodInfo *)0x0);
              this_08 = (ExplosionEvent *)
                        func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
              worldPosition.z = (float)this;
              worldPosition.x = (float)uStack_9;
              worldPosition.y = uStack_9._4_4_;
              MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
              ExplosionEvent__ctor_2
                        (this_08,RuntimeEventType__Enum_ImpulseGunImpact,worldPosition,
                         (MethodInfo *)0x0);
              if (this_07 == (RuntimeEventManager *)0x0) goto code_?;
              RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                        (this_07,this_08,(MethodInfo *)0x0);
            }
            pVVar7 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                               (&VStack_13,(InputToPlayerMovementAndroid *)auStack_1,
                                (MethodInfo *)0x0);
            VStack_8.y = pVVar7->x;
            VStack_8.z = pVVar7->y;
            fVar10 = pVVar7->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a.z = fVar10;
            a.x = VStack_8.y;
            a.y = VStack_8.z;
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                               (&VStack_13,a,(MethodInfo *)0x0);
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               (&VStack_13,*pVVar7,(float)pMStack_21,(MethodInfo *)0x0);
            VStack_8.y = pVVar7->x;
            VStack_8.z = pVVar7->y;
            fVar10 = pVVar7->z;
            pMVar6 = (this_00->fields)._.owner;
            if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
            this_09 = (MVRigidBody *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_1_GetComponent_58
                                ((Component_1 *)pMVar6,
                                 MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)this_09,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar17 != 0) {
              if (this_09 == (MVRigidBody *)0x0) goto code_?;
              impulse.z = fVar10;
              impulse.x = VStack_8.y;
              impulse.y = VStack_8.z;
              MVRigidBody::MVRigidBody_AddImpulse_1(this_09,impulse,1,(MethodInfo *)0x0);
            }
          }
        }
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_10 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_10 != (PrefabPool *)0x0) {
          this_11 = (EnumPoolManager *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_10,
                               (MethodInfo *)0x0);
          if (this_11 != (EnumPoolManager *)0x0) {
            this_12 = EnumPoolManager::EnumPoolManager_Instantiate_18
                                (this_11,PoolEnums__Enum_ImpulseGunRay,
                                 ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_
                                );
            if (this_12 != (ImpulseRay *)0x0) {
              this_13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this_12,(MethodInfo *)0x0);
              pTVar60 = (this_00->fields)._.muzzlePoint;
              if (pTVar60 != (Transform *)0x0) {
                pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_13,pTVar60,(MethodInfo *)0x0);
                if (this_13 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (this_13,*pVVar7,(MethodInfo *)0x0);
                  (this_12->fields).radius = (this_00->fields).radius;
                  fVar10 = (this_00->fields).missColor.g;
                  fVar61 = (this_00->fields).missColor.b;
                  fVar62 = (this_00->fields).missColor.a;
                  (this_12->fields).startColor.r = (this_00->fields).missColor.r;
                  (this_12->fields).startColor.g = fVar10;
                  (this_12->fields).startColor.b = fVar61;
                  (this_12->fields).startColor.a = fVar62;
                  target.z = (float)this;
                  target.x = (float)uStack_9;
                  target.y = uStack_9._4_4_;
                  ImpulseRay::ImpulseRay_Initialize(this_12,target,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar63 = (code *)swi(3);
  (*pcVar63)();
  return;
}


/* List`1[MVWorldObjectClient] SphereCastAgainstWorldObjects(Ray) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_SphereCastAgainstWorldObjects
          (PickupItemImpulseGun *this,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  radius = (this->fields).radius;
  distance = (this->fields).maxRange;
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    ignoreWoIds = (HashSet_1_System_Int32_ *)
                  (*(code *)(pMVar1->klass->vtable).get_IgnoreWOIDs.method)
                            (pMVar1,pMVar1->klass[1]._0.image);
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    this_01 = CollisionDetection::CollisionDetection_MVSphereCastAll
                        (lineOfFire,radius,distance,ignoreWoIds,1 << ((byte)iVar2 & 0x1f),
                         (MethodInfo *)0x0);
    iVar3 = 0;
    if (this_01 != (List_1_VoxelHit_ *)0x0) {
      do {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
        if ((int)pOVar4 <= iVar3) {
          return (List_1_MVWorldObjectClient_ *)this_00;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar5 = func_?(&stack0xffffff68,this_01,iVar3);
        if (this_02 == (MVWorldObjectClientManager *)0x0) break;
        item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,*(int32_t *)(iVar5 + 0x28),(MethodInfo *)0x0);
        if (item != (MVWorldObject *)0x0) {
          if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
        }
        iVar3 = iVar3 + 1;
      } while( true );
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_MVWorldObjectClient_ *)(*pcVar6)();
  return pLVar7;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_TriggerBegin
               (PickupItemImpulseGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  exists = (this->fields).chargeSound;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 == 0) goto code_?;
  pAVar2 = (this->fields).audioSource;
  if (pAVar2 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (pAVar2,(this->fields).chargeSound,(MethodInfo *)0x0);
    pAVar2 = (this->fields).audioSource;
    if (pAVar2 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,1,(MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 != (AudioSource *)0x0) {
        bVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar2,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pAVar2 = (this->fields).audioSource;
          if (pAVar2 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar2,(MethodInfo *)0x0);
        }
code_?:
        (this->fields).isCharging = 1;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).chargeBeginTime = fVar3;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_TriggerEnd
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isCharging == 0) {
    return;
  }
  exists = (this->fields).releaseSound;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pAVar2 = (this->fields).audioSource;
    if ((pAVar2 == (AudioSource *)0x0) ||
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pAVar2,(MethodInfo *)0x0), this_02 == (GameObject *)0x0)
       ) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                (pAVar2,(MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                (pAVar2,(this->fields).releaseSound,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).chargeCurve;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar3 - (this->fields).chargeBeginTime,(MethodInfo *)0x0);
    (this->fields).missColor.a = fVar3;
    (this->fields).hitColor.a = fVar3;
    this_01 = (this->fields)._.owner;
    if ((this_01 != (MVPickupOwner *)0x0) &&
       (this_03 = (Collection_1_VoxelHit_ *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)this_01,(MethodInfo *)0x0), this_03 != (Collection_1_VoxelHit_ *)0x0
       )) {
      avatarId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
      PickupItemImpulseGun_Fire
                (this,(int32_t)avatarId,(this->fields).hitImpulse * fVar3,
                 (this->fields).recoilImpulse * fVar3,(MethodInfo *)0x0);
      (this->fields).isCharging = 0;
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Update
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).chargeObject;
  if ((this->fields).isCharging == 0) {
    if ((pTVar1 != (Transform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pTVar1 = (this->fields).chargeObject;
      if ((pTVar1 != (Transform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pTVar1 = (this->fields).modelTransform;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          VStack_4.z = (float)TypeInfo__UnityEngine__Vector3;
          VStack_4.y = (float)&UNK_?;
          func_?();
        }
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           (&VStack_4,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,*pVVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if ((pTVar1 != (Transform *)0x0) &&
          (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0
          )) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pTVar1 = (this->fields).chargeObject;
      if ((pTVar1 == (Transform *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pAVar6 = (this->fields).chargeCurve;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pAVar6 != (AnimationCurve *)0x0) {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar6,fVar7 - (this->fields).chargeBeginTime,(MethodInfo *)0x0);
      pAVar6 = (this->fields).shakeCurve;
      fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (pAVar6 != (AnimationCurve *)0x0) {
        fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar6,(fStack_8 - (this->fields).chargeBeginTime) *
                                     (this->fields).shakeFrequency * fVar7,(MethodInfo *)0x0);
        fStack_8 = fStack_8 / (this->fields).shakePower;
        pAVar9 = (this->fields).audioSource;
        if (pAVar9 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                    (pAVar9,(this->fields).maxVolume * fVar7,(MethodInfo *)0x0);
          pTVar1 = (this->fields).modelTransform;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
          VStack_4.y = pVVar5->x;
          VStack_4.z = pVVar5->y;
          fVar10 = pVVar5->z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffe0,(this->fields).shakeDirection,fStack_8,
                              (MethodInfo *)0x0);
          a.z = fVar10;
          a.x = VStack_4.y;
          a.y = VStack_4.z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffffe0,a,*pVVar5,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,*pVVar5,(MethodInfo *)0x0);
            pTVar1 = (this->fields).chargeObject;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                               ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               ((Vector3 *)&stack0xffffffe0,*pVVar5,fStack_8 * _UNK_? + fVar7
                                ,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar1,*pVVar5,(MethodInfo *)0x0);
              pAVar9 = (this->fields).audioSource;
              if (pAVar9 != (AudioSource *)0x0) {
                bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                        AudioSource_get_isPlaying(pAVar9,(MethodInfo *)0x0);
                if (bVar3 != 0) {
                  return;
                }
                pAVar9 = (this->fields).audioSource;
                if (pAVar9 != (AudioSource *)0x0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                            (pAVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* PickupItemImpulseGun() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun__ctor
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  (this->fields).hitImpulse = 2400.0;
  (this->fields).recoilImpulse = 1600.0;
  (this->fields).maxRange = 50.0;
  (this->fields).chargingRate = 100.0;
  (this->fields).radius = 1.2;
  func_?(&fStack_1,0x3e4ccccd,0x3e99999a,0x3f666666,0);
  (this->fields).hitColor.r = fStack_1;
  (this->fields).hitColor.g = fStack_2;
  (this->fields).hitColor.b = fStack_3;
  (this->fields).hitColor.a = fStack_4;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  func_?(&fStack_5,0x3f666666,0x3e99999a,0x3e4ccccd,0);
  (this->fields).shakeFrequency = 1.0;
  (this->fields).shakePower = 1.0;
  (this->fields).missColor.r = fStack_5;
  (this->fields).missColor.g = fStack_6;
  (this->fields).missColor.b = fStack_7;
  (this->fields).missColor.a = fStack_8;
  fStack_9 = 0.0;
  uStack_10 = 0;
  func_?(&uStack_10,0x3f800000,0x3f800000,0x3f800000,0);
  bVar11 = cRam_? == '\0';
  (this->fields).shakeDirection.x = (float)(undefined4)uStack_10;
  (this->fields).shakeDirection.y = (float)uStack_10._4_4_;
  (this->fields).shakeDirection.z = fStack_9;
  if (bVar11) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar12 = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer,0);
  (this->fields)._.meshRenderers = pMVar12;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_ChargeState() */

float Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_get_ChargeState
                (PickupItemImpulseGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging == 0) {
    return 0.0;
  }
  this_00 = (this->fields).chargeCurve;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar1 - (this->fields).chargeBeginTime,(MethodInfo *)0x0);
    return fVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}

