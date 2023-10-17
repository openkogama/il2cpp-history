
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_Awake
               (PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_FirstPersonTransform);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
    pTVar1 = (this->fields)._._.firstPersonTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar1,p,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            (this->fields)._._.firstPersonTransform = pTVar1;
            func_?();
            return;
          }
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void DoRemoveCubes() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_DoRemoveCubes
               (PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff68,0,0x48);
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&RStack_3,pTVar1,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    pMVar7 = (this->fields)._._.owner;
    if (pMVar7 != (MVPickupOwner *)0x0) {
      pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                          ((Vector3 *)&RStack_3,pMVar7,(MethodInfo *)0x0);
      VStack_8.x = pVVar2->x;
      VStack_8.y = pVVar2->y;
      VStack_8.z = pVVar2->z;
      RStack_3._cultureKey = (String *)((float)uVar5 - VStack_8.y);
      RStack_3._options = (int32_t)((float)uVar4 - VStack_8.x);
      RStack_3._pattern = (String *)(fVar6 - VStack_8.z);
      pMVar7 = (this->fields)._._.owner;
      if (pMVar7 != (MVPickupOwner *)0x0) {
        pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_8,pMVar7,(MethodInfo *)0x0);
        fVar6 = RStack_3._options;
        origin.z = (float)RStack_3._pattern;
        origin.x = (float)RStack_3._options;
        origin.y = (float)RStack_3._cultureKey;
        UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                  ((Ray *)&stack0xffffffc0,origin,*pVVar2,(MethodInfo *)0x0);
        pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_3,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&stack0xffffffc0,(MethodInfo *)0x0);
        pCVar10 = (Collider *)pRVar9->_options;
        pTVar1 = (Transform *)pRVar9->_cultureKey;
        pSVar11 = pRVar9->_pattern;
        start = *pRVar9;
        pRVar9 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_3,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&stack0xffffffc0,(MethodInfo *)0x0);
        uVar12._0_2_ = 0;
        uVar12._2_2_ = 0;
        VStack_8.x = (float)pRVar9->_options;
        VStack_8.y = (float)pRVar9->_cultureKey;
        VStack_8.z = (float)pRVar9->_pattern;
        this_03 = (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)&stack0xffffffc0;
        method_00 = (MethodInfo *)&stack0xffffffb4;
        pRVar9 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)method_00,this_03,(MethodInfo *)0x0);
        uVar13 = pRVar9->_options;
        uVar14 = pRVar9->_cultureKey;
        RStack_3._cultureKey = (String *)(VStack_8.y + (float)uVar14 * _UNK_?);
        RStack_3._options = (int32_t)(VStack_8.x + (float)uVar13 * _UNK_?);
        RStack_3._pattern = (String *)(VStack_8.z + (float)pRVar9->_pattern * _UNK_?);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar15 = (String *)0x0;
        pIVar16 = (Il2CppClass *)0x41200000;
        end.z = (float)RStack_3._pattern;
        end.x = (float)RStack_3._options;
        end.y = (float)RStack_3._cultureKey;
        color.g = (float)_UNK_?;
        color.r = (float)_UNK_?;
        color.b = (float)_UNK_?;
        color.a = (float)_UNK_?;
        iVar17 = RStack_3._0_8_;
        pDVar18 = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
                  ((Vector3)start,end,color,10.0,(MethodInfo *)0x0);
        pIVar19 = (InvokerMethod)0x0;
        this_01 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
        if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          iVar20 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Default,(MethodInfo *)0x0);
          ray.m_Origin.y = (float)pIVar16;
          ray.m_Origin.x = (float)pDVar18;
          ray.m_Origin.z = (float)pSVar15;
          ray.m_Direction.x = (float)pIVar19;
          ray.m_Direction.y = 0.0;
          ray.m_Direction.z = 0.0;
          bVar21 = CollisionDetection::CollisionDetection_MVHit_1
                             (ray,(VoxelHit *)&stack0xffffff68,2.0,
                              (HashSet_1_System_Int32_ *)this_01,1 << ((byte)iVar20 & 0x1f),
                              (MethodInfo *)0x0);
          if (bVar21 == 0) {
            return;
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
             (pMVar22 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (this_02,iStack_23,(MethodInfo *)0x0),
             pMVar22 != (MVWorldObject *)0x0)) {
            if (((pMVar22->fields).type == 8) || ((pMVar22->fields).type == 0x20)) {
              fVar24 = 0.0;
              puVar25 = &UNK_?;
              pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar26 == (MVNetworkGame *)0x0) ||
                  (pWVar27 = (pMVar26->fields).worldNetwork, pWVar27 == (WorldNetwork *)0x0)) ||
                 (this_00 = (RuntimeEventManager *)(pWVar27->fields)._.runtimeEventManagerNetwork,
                 this_00 == (RuntimeEventManager *)0x0)) goto code_?;
              voxelHit.point.y = (float)puVar25;
              voxelHit.point.x = fVar6;
              voxelHit.point.z = fVar24;
              voxelHit.normal.x = 0.0;
              voxelHit.normal.y = (float)method_00;
              voxelHit.normal.z = (float)this_03;
              voxelHit.cubePos.x = (int16_t)uVar12;
              voxelHit.cubePos.y = SUB42(uVar12,2);
              voxelHit._28_4_ = iStack_28;
              voxelHit.face = uStack_29;
              voxelHit._36_4_ = iStack_23;
              voxelHit.woId = (int32_t)pCStack_30;
              voxelHit.cube = (Cube *)&UNK_?;
              voxelHit.distance = (float)pCVar10;
              voxelHit.collider = (Collider *)pTVar1;
              voxelHit.transform = (Transform *)pSVar11;
              voxelHit._60_4_ = (float)iVar17;
              voxelHit.interactionFlags._0_4_ = (String *)((ulonglong)iVar17 >> 0x20);
              voxelHit.interactionFlags._4_4_ = 0x41a00000;
              RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                        (this_00,voxelHit,0.0,method_00);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* PickupItemHand() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand__ctor
               (PickupItemHand *this,MethodInfo *method)

{
  (this->fields).pushMagnitude = 500.0;
  (this->fields).pushRadius = 3.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._.crossHairCannotFireLow.b = fVar2;
  (this->fields)._.crossHairCannotFireLow.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._.crossHairCannotFireHigh.b = fVar2;
  (this->fields)._.crossHairCannotFireHigh.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = _UNK_?;
  (this->fields)._.crossHairCanFire.g = fVar3;
  (this->fields)._.crossHairCanFire.b = fVar2;
  (this->fields)._.crossHairCanFire.a = fVar1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_5,1.0,(MethodInfo *)0x0);
  AVar6 = pOVar4->hiddenValue;
  pBVar7 = pOVar4->hiddenValueOld;
  fVar3 = pOVar4->fakeValue;
  bVar8 = pOVar4->inited;
  uVar9 = *(undefined3 *)&pOVar4->field_0x11;
  (this->fields)._.fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar6;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar7;
  (this->fields)._.fireInterval.fakeValue = fVar3;
  (this->fields)._.fireInterval.inited = bVar8;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar9;
  func_?(&(this->fields)._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}

