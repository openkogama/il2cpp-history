
/* Void DoRemoveCubes() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_DoRemoveCubes
               (PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff78,0,0x48);
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar2->x;
    uVar3._4_4_ = pVVar2->y;
    fVar4 = pVVar2->z;
    pMVar5 = (this->fields)._._.owner;
    if (pMVar5 != (MVPickupOwner *)0x0) {
      pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                         ((Vector3 *)&stack0xffffffe8,pMVar5,(MethodInfo *)0x0);
      uVar6._0_4_ = pVVar2->x;
      uVar6._4_4_ = pVVar2->y;
      fVar7 = pVVar2->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar4;
      a.x = (float)(int)uVar3;
      a.y = (float)(int)((ulonglong)uVar3 >> 0x20);
      b.z = fVar7;
      b.x = (float)(int)uVar6;
      b.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
      pMVar5 = (this->fields)._._.owner;
      if (pMVar5 != (MVPickupOwner *)0x0) {
        MVPickupOwner::MVPickupOwner_get_LookDirection
                  ((Vector3 *)&stack0xffffffe8,pMVar5,(MethodInfo *)0x0);
        func_?();
        puVar8 = &stack0xffffffe8;
        puVar9 = (undefined8 *)func_?();
        pMVar10 = (MVWorldObject *)0x0;
        uVar6._0_4_ = *(float *)(puVar9 + 1);
        fVar11 = (float)((ulonglong)*puVar9 >> 0x20);
        puVar9 = (undefined8 *)func_?();
        uVar3 = *puVar9;
        pIVar12 = *(InputToPlayerMovementAndroid__Class **)(puVar9 + 1);
        pVVar2 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           ((Vector3 *)&stack0xffffffe8,
                            (InputToPlayerMovementAndroid *)&stack0xffffffc0,(MethodInfo *)0x0);
        fVar4 = pVVar2->x;
        pCVar13 = (Collider *)pVVar2->y;
        uVar14._4_4_ = (Cube *)&stack0xffffffe8;
        uVar14._0_4_ = (int32_t)&UNK_?;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffe8,*pVVar2,2.0,(MethodInfo *)0x0);
        pMVar16 = (MonitorData *)pVVar15->x;
        uVar17 = (undefined4)uVar3;
        uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
        pVVar2 = (Vector3 *)&stack0xffffffe8;
        pTVar1 = (Transform *)&UNK_?;
        a_00.z = (float)pIVar12;
        a_00.x = (float)(int)uVar3;
        a_00.y = (float)(int)((ulonglong)uVar3 >> 0x20);
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (pVVar2,a_00,*pVVar15,(MethodInfo *)0x0);
        uVar6._4_4_ = pVVar15->z;
        pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                            ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
        fVar7 = pCVar19->r;
        fVar20 = pCVar19->g;
        fVar21 = pCVar19->b;
        fVar22 = pCVar19->a;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        fVar23 = 0.0;
        puVar24 = &UNK_?;
        auVar25._4_4_ = (float)uVar6;
        auVar25._0_4_ = fVar11;
        auVar25._8_4_ = 0;
        end.z = uVar6._4_4_;
        end.x = 10.0;
        end.y = 0.0;
        color.g = fVar20;
        color.r = fVar7;
        color.b = fVar21;
        color.a = fVar22;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
                  ((Vector3)(auVar25 << 0x20),end,color,10.0,(MethodInfo *)0x0);
        uVar3 = CONCAT44((float)uVar6,&UNK_?);
        this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        iVar26 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Default,(MethodInfo *)0x0);
        ray.m_Origin.y = (float)pMVar16;
        ray.m_Origin.x = (float)pIVar12;
        ray.m_Origin.z = (float)puVar24;
        ray.m_Direction.x = fVar23;
        ray.m_Direction.y = (float)(int)uVar3;
        ray.m_Direction.z = (float)(int)((ulonglong)uVar3 >> 0x20);
        bVar27 = CollisionDetection::CollisionDetection_MVHit_1
                          (ray,(VoxelHit *)&stack0xffffff78,2.0,(HashSet_1_System_Int32_ *)this_00,
                           1 << ((byte)iVar26 & 0x1f),(MethodInfo *)0x0);
        if (bVar27 == 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_01,(int32_t)uVar14,(MethodInfo *)0x0);
          method_00 = SUB84(uVar14,4);
          if (this_02 != (MVWorldObject *)0x0) {
            puVar24 = (undefined *)0x0;
            pOVar28 = System.Core.dll::System::Linq::
                      Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::
                      Object]::
                      Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                  *)this_02,(MethodInfo *)0x0);
            if (pOVar28 != (Object *)0x8) {
              puVar8 = (undefined1 *)0x0;
              puVar24 = &UNK_?;
              pOVar28 = System.Core.dll::System::Linq::
                        Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::
                        Object]::
                        Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                    *)this_02,(MethodInfo *)0x0);
              pMVar10 = this_02;
              if (pOVar28 != (Object *)0x20) {
                return;
              }
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_03 != (MVNetworkGame *)0x0) {
              puVar29 = &UNK_?;
              this_04 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)CloudyTheme::CloudyTheme_get_Identifier
                                     ((CloudyTheme *)this_03,(MethodInfo *)0x0);
              if (this_04 !=
                  (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
                iVar26 = 0;
                puVar30 = &UNK_?;
                this_05 = (RuntimeEventManager *)
                          System.dll::System::Collections::Generic::
                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                          ::Single,System::Object]::
                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                    (this_04,(MethodInfo *)0x0);
                if (this_05 != (RuntimeEventManager *)0x0) {
                  voxelHit.point.y = (float)pMVar10;
                  voxelHit.point.x = (float)puVar24;
                  voxelHit.point.z = (float)puVar8;
                  voxelHit.normal.x = (float)puVar29;
                  voxelHit.normal.y = (float)this_03;
                  voxelHit.normal.z = (float)puVar30;
                  voxelHit.cubePos._0_4_ = this_04;
                  voxelHit._28_4_ = iVar26;
                  voxelHit.face = 0x41a00000;
                  voxelHit._36_4_ = 0;
                  voxelHit.woId = (int32_t)method_00;
                  voxelHit.cube = (Cube *)fVar4;
                  voxelHit.distance = (float)pCVar13;
                  voxelHit.collider = (Collider *)pTVar1;
                  voxelHit.transform = (Transform *)pVVar2;
                  voxelHit._60_4_ = uVar17;
                  voxelHit.interactionFlags._0_4_ = uVar18;
                  voxelHit.interactionFlags._4_4_ = 0x41a00000;
                  RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                            (this_05,voxelHit,0.0,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCannotFireLow.r = pCVar1->r;
  (this->fields)._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._.crossHairCannotFireLow.b = fVar4;
  (this->fields)._.crossHairCannotFireLow.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCannotFireHigh.r = pCVar1->r;
  (this->fields)._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._.crossHairCannotFireHigh.b = fVar4;
  (this->fields)._.crossHairCannotFireHigh.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCanFire.r = pCVar1->r;
  (this->fields)._.crossHairCanFire.g = fVar3;
  (this->fields)._.crossHairCanFire.b = fVar4;
  (this->fields)._.crossHairCanFire.a = fVar5;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
  bVar7 = cRam_? == '\0';
  AVar8 = pOVar6->hiddenValue;
  pBVar9 = pOVar6->hiddenValueOld;
  fVar3 = pOVar6->fakeValue;
  bVar10 = pOVar6->inited;
  uVar11 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields)._.fireInterval.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar8;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar9;
  (this->fields)._.fireInterval.fakeValue = fVar3;
  (this->fields)._.fireInterval.inited = bVar10;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar11;
  if (bVar7) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar12 = (MeshRenderer__Array *)func_?();
  (this->fields)._._.meshRenderers = pMVar12;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

