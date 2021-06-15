
/* Boolean CanInsertCubeAtCubePos(IntVector) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_CanInsertCubeAtCubePos
               (PickupItemModelGun *this,IntVector cubePos,MethodInfo *method)

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
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_01,
                         MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                        );
    if (this_02 != (MVRoundCube *)0x0) {
      gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                         ((Vector3 *)&stack0xfffffff0,(GameObject *)gameObject,cubePos,
                          (MethodInfo *)0x0);
      fVar2 = pVVar1->z;
      this_00 = (this->fields)._._.owner;
      if (this_00 != (MVPickupOwner *)0x0) {
        pVVar1 = InventoryItem+ItemDescription::
                 InventoryItem_ItemDescription_get_CameraPreviewerOffset
                           ((Vector3 *)&stack0xffffffd0,(InventoryItem_ItemDescription *)this_00,
                            (MethodInfo *)0x0);
        uStack_3._0_4_ = pVVar1->x;
        fStack_4 = pVVar1->y;
        fVar5 = pVVar1->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uStack_3._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        a.z = fVar2;
        a.x = (float)uStack_3;
        a.y = SUB84(uStack_3,4);
        b.z = fVar5;
        b.x = (float)uStack_3;
        b.y = SUB84(uStack_3,4);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffffd0,a,b,(MethodInfo *)0x0);
        fVar6 = (float10)func_?();
        return (this->fields).minDistanceToCubeFire <= (float)fVar6;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* IEnumerator DoAutoFire() */

IEnumerator *
Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_DoAutoFire
          (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemModelGun___DoAutoFire_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Boolean DoLineOfFireCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_DoLineOfFireCheck
               (PickupItemModelGun *this,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pVVar2 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                       (&VStack_3,(InventoryItem_ItemDescription *)pMVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar1 = (this->fields)._._.owner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_3,pMVar1,(MethodInfo *)0x0);
      uVar6 = pVVar2->y;
      fVar7 = pVVar2->z;
      func_?(&stack0xffffffcc,(int)uStack_4,(int)((ulonglong)uStack_4 >> 0x20),fVar5);
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Default,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)(1 << ((byte)iVar8 & 0x1f)),(MethodInfo *)0x0);
      VStack_3.y = 0.0;
      VStack_3.z = 0.0;
      uStack_4 = 0;
      fVar5 = (this->fields).range;
      VStack_3.x = fVar7;
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar1 = (this->fields)._._.owner;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        this_02 = (Collection_1_VoxelHit_ *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pMVar1,(MethodInfo *)0x0);
        if (this_02 != (Collection_1_VoxelHit_ *)0x0) {
          item = (UnityWebRequest *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
          if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            layerMask = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  (this_00,(MethodInfo *)0x0);
            ray.m_Origin.y = VStack_3.x;
            ray.m_Origin.x = (float)uVar6;
            ray.m_Origin.z = VStack_3.y;
            ray.m_Direction.x = VStack_3.z;
            ray.m_Direction.y = (float)(int)uStack_4;
            ray.m_Direction.z = (float)((ulonglong)uStack_4 >> 0x20);
            bVar9 = CollisionDetection::CollisionDetection_MVHit_1
                              (ray,hit,fVar5,(HashSet_1_System_Int32_ *)this_01,(int32_t)layerMask,
                               (MethodInfo *)0x0);
            return bVar9;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* IntVector GetCubePos(VoxelHit) */

IntVector Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetCubePos
                    (PickupItemModelGun *this,VoxelHit voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CStack_1.monitor = (MonitorData *)0x0;
  CStack_1.fields._._.m_CachedPtr._0_2_ = 0;
  voxelHit_00.interactionFlags._0_4_ = voxelHit.interactionFlags._4_4_;
  voxelHit_00._60_4_ = (undefined *)voxelHit.interactionFlags;
  voxelHit_00.point.y = voxelHit.point.z;
  voxelHit_00.point.x = voxelHit.point.y;
  voxelHit_00.point.z = voxelHit.normal.x;
  voxelHit_00.normal.x = voxelHit.normal.y;
  voxelHit_00.normal.y = voxelHit.normal.z;
  voxelHit_00.normal.z = (float)voxelHit.cubePos._0_4_;
  voxelHit_00.cubePos.x = voxelHit.cubePos.z;
  voxelHit_00.cubePos.y = voxelHit._30_2_;
  voxelHit_00._28_4_ = voxelHit.face;
  voxelHit_00.face = voxelHit._36_4_;
  voxelHit_00._36_4_ = voxelHit.woId;
  voxelHit_00.woId = (int32_t)voxelHit.cube;
  voxelHit_00.cube = (Cube *)voxelHit.distance;
  voxelHit_00.distance = (float)voxelHit.collider;
  voxelHit_00.collider = (Collider *)voxelHit.transform;
  voxelHit_00.transform = (Transform *)voxelHit._60_4_;
  voxelHit_00.interactionFlags._4_4_ = 0x3e4ccccd;
  bVar2 = PickupItemModelGun_GetCubePosFromFineGrainedTerrain
                    (in_stack_3,voxelHit_00,(float)&CStack_1.monitor,(IntVector *)0x0,
                     unaff_EDI);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      voxelHit.collider = (Collider *)TypeInfo__MVGameControllerBase;
      voxelHit.distance = (float)&UNK_?;
      func_?();
    }
    voxelHit.collider = (Collider *)0x0;
    voxelHit.distance = (float)&UNK_?;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      voxelHit.transform =
           (Transform *)
           MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
      ;
      voxelHit.distance = (float)&UNK_?;
      voxelHit.collider = (Collider *)this_00;
      voxelHit._60_4_ =
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                     (this_00,
                      MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                     );
      if ((MVRoundCube *)voxelHit._60_4_ != (MVRoundCube *)0x0) {
        voxelHit.interactionFlags._0_4_ = (undefined *)0x0;
        voxelHit.transform = (Transform *)&UNK_?;
        pCVar4 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)voxelHit._60_4_,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          voxelHit.interactionFlags._4_4_ = (Collider *)&UNK_?;
          func_?();
        }
        voxelHit.interactionFlags._4_4_ = (Collider *)0x3dcccccd;
        voxelHit.transform = (Transform *)voxelHit.normal.x;
        voxelHit._60_4_ = voxelHit.normal.y;
        voxelHit.interactionFlags._0_4_ = (undefined *)voxelHit.normal.z;
        voxelHit.collider = &CStack_1;
        voxelHit.distance = (float)&UNK_?;
        a.y = voxelHit.normal.y;
        a.x = voxelHit.normal.x;
        a.z = voxelHit.normal.z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)voxelHit.collider,a,0.1,(MethodInfo *)0x0);
        voxelHit.interactionFlags._4_4_ = &CStack_1;
        fStack6 = voxelHit.point.y;
        fStack7 = voxelHit.point.z;
        voxelHit.interactionFlags._0_4_ = &UNK_?;
        a_00.y = voxelHit.point.y;
        a_00.x = voxelHit.point.x;
        a_00.z = voxelHit.point.z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)voxelHit.interactionFlags._4_4_,a_00,*pVVar5,
                            (MethodInfo *)0x0);
        uVar8._0_4_ = pVVar5->x;
        uVar8._4_4_ = pVVar5->y;
        fVar9 = pVVar5->z;
        voxelHit.interactionFlags._0_4_ = (undefined *)(undefined4)uVar8;
        voxelHit.interactionFlags._4_4_ = (Collider *)uVar8._4_4_;
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          pSStack10 = TypeInfo__SharedCubeFunctions;
          func_?();
          uVar8 = CONCAT44(voxelHit.interactionFlags._4_4_,(undefined *)voxelHit.interactionFlags);
        }
        pSStack10 = (SharedCubeFunctions__Class *)0x0;
        point.y = (float)(int)uVar8;
        point.z = (float)(int)((ulonglong)uVar8 >> 0x20);
        point.x = (float)pCVar4;
        IVar11 = SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                          ((GameObject *)&voxelHit.interactionFlags,point,SUB41(fVar9,0),
                           (MethodInfo *)0x0);
        iVar12 = *(int16_t *)(IVar11._0_4_ + 1);
        this->klass = (PickupItemModelGun__Class *)*IVar11._0_4_;
        *(int16_t *)&this->monitor = iVar12;
        IVar13.z = iVar12;
        IVar13._0_4_ = this;
        return IVar13;
      }
    }
    voxelHit.interactionFlags._0_4_ = (undefined *)0x0;
    voxelHit._60_4_ = &UNK_?;
    func_?();
    pcVar14 = (code *)swi(3);
    IVar11 = (IntVector)(*pcVar14)();
    return IVar11;
  }
  this->klass = (PickupItemModelGun__Class *)CStack_1.monitor;
  *(int16_t *)&this->monitor = (int16_t)CStack_1.fields._._.m_CachedPtr;
  IVar11.z = (int16_t)CStack_1.fields._._.m_CachedPtr;
  IVar11._0_4_ = this;
  return IVar11;
}


/* Boolean GetCubePosFromFineGrainedTerrain(VoxelHit, Single, IntVector ByRef) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetCubePosFromFineGrainedTerrain
               (PickupItemModelGun *this,VoxelHit voxelHit,float maxDistanceToEdge,IntVector *pos,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff6c;
  puVar5 = &stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  iStack_7 = 0;
  bStack_8 = 0;
  func_?();
  iStack_9 = -1;
  puStack_10 = &stack0xffffff6c;
  puStack_4 = &stack0xffffff6c;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_10 = &stack0xffffff6c, puStack_4 = &stack0xffffff6c,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_10 = &stack0xffffff6c;
    puStack_4 = &stack0xffffff6c;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    iVar11 = func_?();
code_?:
    iVar11 = func_?((short)iVar11,0);
code_?:
    func_?((short)iVar11,0);
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  uVar14 = SUB42(this_00,0);
  uVar15 = (undefined2)((uint)this_00 >> 0x10);
  pDStack_16 = (DayNightCycle *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,voxelHit._36_4_,(MethodInfo *)0x0);
  if (pDStack_16 != (DayNightCycle *)0x0) {
    bVar17 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
    if (((pDStack_16->klass->_1).naturalAligment < bVar17) ||
       ((MVCubeModelFineGrainedTerrain__Class *)(pDStack_16->klass->_1).typeHierarchy[bVar17 - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pDVar19 = (DayNightCycle *)0x0;
    if (bVar18) {
      pDVar19 = pDStack_16;
    }
    if (pDVar19 != (DayNightCycle *)0x0) {
      pCVar20 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDStack_16,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      VVar21.y = voxelHit.point.x;
      VVar21.x = (float)in_stack_22;
      VVar21.z = voxelHit.point.y;
      iVector = voxelHit._20_6_;
      EVar23 = Cube::Cube_GetEdge_1
                         ((GameObject *)pCVar20,(Cube *)voxelHit.woId,voxelHit._28_4_,VVar21,iVector,
                          (MethodInfo *)0x0);
      pCVar20 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDStack_16,(MethodInfo *)0x0);
      pVStack_24 = Cube::Cube_GetEdgeVerticesWorld
                             ((GameObject *)pCVar20,(Cube *)voxelHit.woId,voxelHit._28_4_,EVar23,
                              iVector,(MethodInfo *)0x0);
      if (pVStack_24 != (Vector3__Array *)0x0) {
        if (pVStack_24->max_length == 0) {
          uVar25 = func_?(0);
          func_?(uVar25);
        }
        else if (1 < pVStack_24->max_length) {
          point.y = voxelHit.point.x;
          point.x = (float)in_stack_22;
          point.z._0_2_ = voxelHit.point.y._0_2_;
          point.z._2_2_ = voxelHit.point.y._2_2_;
          bVar13 = MathFunctions::MathFunctions_DistancePointLine
                             (point,pVStack_24->vector[0],pVStack_24->vector[1],&fStack_6,
                              (MethodInfo *)0x0);
          pIVar26 = TypeRef__MV__WorldObject__Face;
          if ((bVar13 != 0) && (fStack_6 < voxelHit.interactionFlags._4_4_)) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar27 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar26,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Enum);
            }
            pAVar28 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar27,(MethodInfo *)0x0);
            if (pAVar28 != (Array *)0x0) {
              pIStack_29 = mscorlib.dll::System::Array::Array_GetEnumerator
                                     (pAVar28,(MethodInfo *)CONCAT22(uVar15,uVar14));
              uStack_1 = 0;
              iVar11 = -1;
code_?:
              if (pIStack_29 != (IEnumerator *)0x0) {
                cVar30 = func_?(1,TypeInfo__System__Collections__IEnumerator);
                if (cVar30 != '\0') goto code_?;
                iVar31 = iVar11 + 1;
                *(undefined4 *)(puStack_10 + iVar31 * 4) = 0x25c;
                goto code_?;
              }
            }
            goto code_?;
          }
          goto code_?;
        }
        uVar25 = func_?(0);
        func_?(uVar25);
      }
      goto code_?;
    }
  }
code_?:
  bStack_8 = 0;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return bStack_8;
code_?:
  uVar25 = func_?(0,TypeInfo__System__Collections__IEnumerator);
  uVar14 = 0xb010;
  uVar15 = 0x1049;
  pFVar32 = (Face__Enum *)func_?(uVar25);
  pIVar26 = TypeRef__Edge;
  pMStack_33 = (MethodInfo *)*pFVar32;
  if (pMStack_33 != (MethodInfo *)voxelHit._28_4_) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar27 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar26,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar28 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar27,(MethodInfo *)0x0);
    if (pAVar28 == (Array *)0x0) goto code_?;
    pIStack_34 = mscorlib.dll::System::Array::Array_GetEnumerator
                           (pAVar28,(MethodInfo *)CONCAT22(uVar15,uVar14));
    uStack_1 = CONCAT31(uStack_1._1_3_,1);
    pIVar35 = pIStack_34;
    pIStack_36 = pIStack_34;
    do {
      do {
        if (pIVar35 == (IEnumerator *)0x0) goto code_?;
        cVar30 = func_?(1,TypeInfo__System__Collections__IEnumerator);
        if (cVar30 == '\0') {
          uStack_1 = uStack_1 & 0xffffff00;
          *(undefined4 *)(puStack_10 + (iStack_9 + 1) * 4) = 0x234;
          iStack_9 = iStack_9 + 1;
          goto code_?;
        }
        uVar25 = func_?(0,TypeInfo__System__Collections__IEnumerator);
        pEVar37 = (Edge__Enum *)func_?(uVar25);
        EVar23 = *pEVar37;
      } while (EVar23 == Edge__Enum_None);
      if (pDStack_16 == (DayNightCycle *)0x0) goto code_?;
      pCVar20 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDStack_16,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?();
      }
      uVar14 = (undefined2)((uint)pMStack_33 >> 0x10);
      pVStack_38 = Cube::Cube_GetEdgeVerticesWorld
                             ((GameObject *)pCVar20,(Cube *)voxelHit.woId,(Face__Enum)pMStack_33,
                              EVar23,iVector,(MethodInfo *)0x0);
      if (pVStack_38 == (Vector3__Array *)0x0) goto code_?;
      puVar39 = (undefined8 *)func_?();
      uStack_40 = *puVar39;
      fVar41 = *(float *)(puVar39 + 1);
      pVVar42 = (Vector3 *)func_?();
      VVar21 = *pVVar42;
      pCVar43 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_cyan
                          ((Color *)&stack0xffffff78,(MethodInfo *)0x0);
      color = *pCVar43;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      start.z = fVar41;
      start.x = (float)(undefined4)uStack_40;
      start.y = uStack_40._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
                (start,VVar21,color,10.0,(MethodInfo *)0x0);
      iVar11 = 0;
      iVar31 = 0;
      while( true ) {
        if (pVStack_38 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVStack_38->max_length <= iVar31) break;
        puVar39 = (undefined8 *)func_?();
        uVar44 = *puVar39;
        uStack_45 = *(undefined4 *)(puVar39 + 1);
        if (pVStack_24 == (Vector3__Array *)0x0) goto code_?;
        puVar39 = (undefined8 *)func_?();
        uVar46 = *puVar39;
        fVar41 = *(float *)(puVar39 + 1);
        uStack_40._4_4_ = fVar41;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        uVar14 = (undefined2)((uint)uStack_45 >> 0x10);
        a_00.z = uStack_40._4_4_;
        a_00._0_8_ = uVar46;
        b_00.z._0_2_ = (short)uStack_45;
        b_00.x = (float)(int)uVar44;
        b_00.y = (float)(int)((ulonglong)uVar44 >> 0x20);
        b_00.z._2_2_ = uVar14;
        fVar41 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                           (a_00,b_00,(MethodInfo *)0x0);
        uStack_40 = CONCAT44(fVar41,(undefined4)uStack_40);
        if (fVar41 < _UNK_?) {
          iVar11 = iVar11 + 1;
        }
        puVar39 = (undefined8 *)func_?();
        uVar46 = *puVar39;
        fVar41 = *(float *)(puVar39 + 1);
        uStack_40._4_4_ = fVar41;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = uStack_40._4_4_;
        a._0_8_ = uVar46;
        b.z._0_2_ = (short)uStack_45;
        b.x = (float)(int)uVar44;
        b.y = (float)(int)((ulonglong)uVar44 >> 0x20);
        b.z._2_2_ = (short)((uint)uStack_45 >> 0x10);
        fVar41 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                           (a,b,(MethodInfo *)0x0);
        uStack_40 = CONCAT44(fVar41,(undefined4)uStack_40);
        if (fVar41 < _UNK_?) {
          iVar11 = iVar11 + 1;
        }
        iVar31 = iVar31 + 1;
      }
      pIVar35 = pIStack_36;
    } while (iVar11 != 2);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?();
    }
    IVar47.z = voxelHit.normal.z._0_2_;
    IVar47._0_4_ = auStack_48;
    IVar47 = Cube::Cube_GetCubePosAboveFace(IVar47,CONCAT22(uVar14,voxelHit.cubePos.x),pMStack_33);
    pIVar49 = IVar47._0_4_;
    iVar50 = pIVar49->z;
    IVar47 = *pIVar49;
    *(undefined4 *)maxDistanceToEdge = *(undefined4 *)pIVar49;
    *(int16_t *)((int)maxDistanceToEdge + 4) = iVar50;
    iVar11 = func_?();
    if (iVar11 == 0) goto code_?;
    this_01 = (MVCubeModelBase *)func_?(pDStack_16);
    a_01 = MVCubeModelBase::MVCubeModelBase_GetCube(this_01,IVar47,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?((short)TypeInfo__MV__WorldObject__CubeBase);
    }
    bVar13 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                       ((CubeBase *)a_01,(CubeBase *)0x0,(MethodInfo *)0x0);
    iVar11 = iStack_9 + 1;
    uStack_1 = uStack_1 & 0xffffff00;
    *(undefined4 *)(puStack_10 + iVar11 * 4) = 0x25e;
    iStack_9 = iVar11;
    if (bVar13 == 0) {
      bStack_8 = 0;
    }
    else {
      bStack_8 = 1;
    }
code_?:
    iVar31 = iStack_9;
    iVar11 = func_?(pIStack_36);
    if (iVar11 != 0) {
      func_?(0,TypeInfo__System__IDisposable);
    }
    iVar11 = iStack_7;
    if (iStack_7 != 0) goto code_?;
    iVar11 = iVar31;
    if (iVar31 != -1) {
      if (*(int *)(puStack_10 + iVar31 * 4) == 0x25e) {
code_?:
        puVar5 = puStack_10;
        uStack_1 = 0xffffffff;
        iVar11 = func_?(pIStack_29);
        if (iVar11 != 0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        iVar11 = iStack_7;
        if (iStack_7 != 0) goto code_?;
        if ((iVar31 == -1) || (*(int *)(puVar5 + iVar31 * 4) != 0x25e)) goto code_?;
        goto code_?;
      }
      if ((*(int *)(puStack_10 + iVar31 * 4) == 0x234) &&
         (iVar11 = iVar31 + -1, iStack_9 = iVar31 + -1, iVar31 < 0)) {
        iVar11 = iVar31;
        iStack_9 = iVar31;
      }
    }
  }
  goto code_?;
}


/* Void HandleCubeHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCubeHit
               (PickupItemModelGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  if (this_00 != (AudioManager *)0x0) {
    position.y = voxelHit.point.x;
    position.x = (float)in_stack_1;
    position.z = voxelHit.point.y;
    AudioManager::AudioManager_Play
              (this_00,StringLiteral_cubeLanded,(this->fields).cubeLandedSound,position,0.6,
               SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleCubeHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCubeHitLocal
               (PickupItemModelGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  voxelHit_00._38_2_ = voxelHit.face._2_2_;
  voxelHit_00._36_2_ = (int16_t)voxelHit.face;
  voxelHit_00.point.y = voxelHit.point.x;
  voxelHit_00.point.x = (float)in_stack_1;
  voxelHit_00.point.z = voxelHit.point.y;
  voxelHit_00.normal.x = voxelHit.point.z;
  voxelHit_00.normal.y = voxelHit.normal.x;
  voxelHit_00.normal.z = voxelHit.normal.y;
  voxelHit_00.cubePos._0_4_ = voxelHit.normal.z;
  voxelHit_00.cubePos.z = voxelHit.cubePos.x;
  voxelHit_00._30_2_ = voxelHit.cubePos.y;
  voxelHit_00.face = voxelHit._28_4_;
  voxelHit_00.woId = voxelHit._36_4_;
  voxelHit_00.cube = (Cube *)voxelHit.woId;
  voxelHit_00.distance = (float)voxelHit.cube;
  voxelHit_00.collider = (Collider *)voxelHit.distance;
  voxelHit_00.transform = (Transform *)voxelHit.collider;
  voxelHit_00._60_4_ = voxelHit.transform;
  voxelHit_00.interactionFlags._0_4_ = voxelHit._60_4_;
  voxelHit_00.interactionFlags._4_4_ =
       (int)(CONCAT26(voxelHit.interactionFlags._2_2_,
                      CONCAT24((undefined2)voxelHit.interactionFlags,voxelHit._60_4_)) >> 0x20);
  IVar2 = PickupItemModelGun_GetCubePos
                    ((PickupItemModelGun *)&voxelHit.field_0x3c,voxelHit_00,(MethodInfo *)0x0);
  uVar3 = *IVar2._0_4_;
  voxelHit.interactionFlags._2_2_ = *(int16_t *)(IVar2._0_4_ + 1);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    voxelHit.distance = (float)TypeInfo__MVGameControllerBase;
    voxelHit.cube = (Cube *)&UNK_?;
    func_?();
  }
  voxelHit.distance = 0.0;
  voxelHit.cube = (Cube *)&UNK_?;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    voxelHit.collider = (Collider *)0x0;
    voxelHit.cube = (Cube *)&UNK_?;
    voxelHit.distance = (float)this_00;
    voxelHit.transform =
         (Transform *)
         CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_00,(MethodInfo *)0x0);
    if ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)voxelHit.transform !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      voxelHit._60_4_ = 0;
      voxelHit.collider = (Collider *)&UNK_?;
      this_01 = (RuntimeEventManager *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                            *)voxelHit.transform,(MethodInfo *)0x0);
      material = (this->fields).material;
      voxelHit._60_4_ = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
      uStack_4 = (undefined3)((uint)in_ECX >> 8);
      voxelHit.transform = (Transform *)&UNK_?;
      this_02 = (SingleCubeFineGrainedEvent *)func_?();
      voxelHit.woId = 0;
      voxelHit.isCubeHit = material;
      voxelHit._37_3_ = uStack_4;
      voxelHit.face._0_2_ = voxelHit.interactionFlags._2_2_;
      voxelHit.normal.z = (float)&UNK_?;
      IVar2.z = voxelHit.interactionFlags._2_2_;
      IVar2.x = (int16_t)uVar3;
      IVar2.y = SUB42(uVar3,2);
      voxelHit.cubePos._0_4_ = this_02;
      voxelHit._28_4_ = uVar3;
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
      SingleCubeFineGrainedEvent__ctor(this_02,IVar2,material,(MethodInfo *)0x0);
      if (this_01 != (RuntimeEventManager *)0x0) {
        voxelHit._60_4_ = 0;
        voxelHit.distance = (float)&UNK_?;
        voxelHit.collider = (Collider *)this_01;
        voxelHit.transform = (Transform *)this_02;
        RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                  (this_01,this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  voxelHit._60_4_ = 0;
  voxelHit.transform = (Transform *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleCursors() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCursors
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff9c,0,0x48);
  bVar1 = PickupItemModelGun_DoLineOfFireCheck(this,(VoxelHit *)&stack0xffffff9c,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar2 = (this->fields).primaryCursor;
    if (pGVar2 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeState
                  (pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  }
  if ((this->fields).fireSecondary == 0) {
    pGVar2 = (this->fields).secondaryCursor;
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    voxelHit.point.y = in_stack_3;
    voxelHit.point.x = in_stack_4;
    voxelHit.point.z = in_stack_5;
    voxelHit.normal.x = in_stack_6;
    voxelHit.normal.y._0_2_ = SUB42(fStack_7,0);
    voxelHit.normal.y._2_2_ = (short)((uint)fStack_7 >> 0x10);
    voxelHit.normal.z = fStack_8;
    voxelHit.cubePos.x = (int16_t)BStack_9._._.m_CachedPtr;
    voxelHit.cubePos.y = BStack_9._._.m_CachedPtr._2_2_;
    voxelHit._28_4_ = _iStack_48;
    voxelHit.face = iStack_10;
    voxelHit._36_2_ = (short)uStack_11;
    voxelHit._38_2_ = SUB42(uStack_11,2);
    voxelHit.woId = iStack_12;
    voxelHit.cube._0_2_ = (short)pCStack_13;
    voxelHit.cube._2_2_ = (short)((uint)pCStack_13 >> 0x10);
    voxelHit.distance._0_2_ = SUB42(fStack_14,0);
    voxelHit.distance._2_2_ = (short)((uint)fStack_14 >> 0x10);
    voxelHit.collider = pCStack_15;
    voxelHit.transform = pTStack_16;
    voxelHit._60_4_ = uStack_17;
    voxelHit.interactionFlags._0_4_ = (float)iStack_18;
    voxelHit.interactionFlags._4_4_ = (float)((ulonglong)iStack_18 >> 0x20);
    IVar19 = PickupItemModelGun_GetCubePos
                       ((PickupItemModelGun *)&stack0xffffffec,voxelHit,(MethodInfo *)0x0);
    pIVar20 = IVar19._0_4_;
    uVar21 = pIVar20->y;
    method_00 = (MethodInfo *)((uint)(ushort)pIVar20->z << 0x10);
    iVar22 = pIVar20->z;
    bVar1 = PickupItemModelGun_CanInsertCubeAtCubePos(this,*pIVar20,method_00);
    iVar23 = (int16_t)((uint)method_00 >> 0x10);
    pGVar2 = (this->fields).primaryCursor;
    if (bVar1 == 0) {
      if (pGVar2 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeOverride
                  (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    IVar19 = GUICellCursor::GUICellCursor_get_LocalPos
                       ((GUICellCursor *)&stack0xffffffec,(MethodInfo *)pGVar2);
    IVar19 = *IVar19._0_4_;
    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
      func_?();
    }
    a.y = uVar21;
    a.x = iVar22;
    a.z = iVar23;
    bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                      (a,IVar19,(MethodInfo *)0x0);
    pTVar24 = (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)(this->fields).primaryCursor;
    if (bVar1 == 0) {
      if (pTVar24 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0) goto code_?;
      pOVar25 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
               TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (pTVar24,(MethodInfo *)0x0);
      if (pOVar25 == (Object *)0x1) {
        return;
      }
      pGVar2 = (this->fields).primaryCursor;
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar26 == (MVWorldObjectClientManager *)0x0) ||
          (this_00 = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetSingletonWorldObject_4
                               (pMVar26,
                                MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                               ), this_00 == (MVRoundCube *)0x0)) ||
         (pCVar27 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)this_00,(MethodInfo *)0x0),
         pTVar24 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0)) goto code_?;
      position.y = uVar21;
      position.x = iVar22;
      position.z = iVar23;
      GUICellCursor::GUICellCursor_SetCursorCube
                ((GUICellCursor *)pTVar24,position,(GameObject *)pCVar27,(MethodInfo *)0x0);
      pGVar2 = (this->fields).primaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar2 = (this->fields).primaryCursor;
    }
  }
  else {
    pGVar2 = (this->fields).primaryCursor;
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar26 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_01 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar26,iStack_12,(MethodInfo *)0x0);
    pGVar2 = (this->fields).secondaryCursor;
    iVar28 = func_?();
    if (iVar28 == 0) {
      if (pGVar2 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeState
                  (pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    MVar29._._._.m_CachedPtr = (Behaviour__Fields)(Behaviour__Fields)BStack_9._._.m_CachedPtr;
    IVar19 = GUICellCursor::GUICellCursor_get_LocalPos
                       ((GUICellCursor *)&stack0xffffffe4,(MethodInfo *)pGVar2);
    uVar30 = *IVar19._0_4_;
    iVar22 = *(int16_t *)(IVar19._0_4_ + 1);
    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    IVar19.z = iStack_31;
    IVar19._0_4_ = MVar29._._._.m_CachedPtr;
    b.z = iVar22;
    b._0_4_ = uVar30;
    bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                      (IVar19,b,(MethodInfo *)0x0);
    pTVar24 = (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)(this->fields).secondaryCursor;
    if (bVar1 == 0) {
      if (pTVar24 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0) goto code_?;
      pOVar25 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
               TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (pTVar24,(MethodInfo *)0x0);
      if (pOVar25 == (Object *)0x1) {
        return;
      }
    }
    else {
      if ((this_01 == (DayNightCycle *)0x0) ||
         (pCVar27 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
         pTVar24 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0)) goto code_?;
      position_00.z = iStack_31;
      position_00._0_4_ = BStack_9._._.m_CachedPtr;
      GUICellCursor::GUICellCursor_SetCursorCube
                ((GUICellCursor *)pTVar24,position_00,(GameObject *)pCVar27,(MethodInfo *)0x0);
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields).secondaryCursor;
  }
  if (pGVar2 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeIn,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnFire
               (PickupItemModelGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff78,0,0x48);
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar1 != '\0') {
    return;
  }
  bVar2 = PickupItemModelGun_DoLineOfFireCheck(this,(VoxelHit *)&stack0xffffff78,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    voxelHit.point.y = in_stack_3;
    voxelHit.point.x = in_stack_4;
    voxelHit.point.z = in_stack_5;
    voxelHit.normal.x = in_stack_6;
    voxelHit.normal.y = in_stack_7;
    voxelHit.normal.z = in_stack_8;
    voxelHit.cubePos.x = (int16_t)in_stack_9;
    voxelHit.cubePos.y = SUB42(in_stack_9,2);
    voxelHit.cubePos.z = (int16_t)in_stack_10;
    voxelHit._30_2_ = SUB42(in_stack_10,2);
    voxelHit.face = in_stack_11;
    voxelHit.isCubeHit = (bool)in_stack_12;
    voxelHit._37_3_ = SUB43(in_stack_12,1);
    voxelHit.woId = in_stack_13;
    voxelHit.cube = in_stack_14;
    voxelHit.distance = in_stack_15;
    voxelHit.collider = in_stack_16;
    voxelHit.transform = in_stack_17;
    voxelHit._60_4_ = in_stack_18;
    voxelHit.interactionFlags._0_4_ = in_stack_19;
    voxelHit.interactionFlags._4_4_ = in_stack_20;
    IVar21 = PickupItemModelGun_GetCubePos
                       ((PickupItemModelGun *)&stack0xfffffff4,voxelHit,(MethodInfo *)0x0);
    bVar2 = PickupItemModelGun_CanInsertCubeAtCubePos(this,*IVar21._0_4_,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
  }
  pTVar22 = (this->fields)._._.muzzlePoint;
  if (pTVar22 != (Transform *)0x0) {
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_24,pTVar22,(MethodInfo *)0x0);
    this_00 = Bullet::Bullet_CreateBullet(PoolEnums__Enum_CubeGunBullet,*pVVar23,(MethodInfo *)0x0);
    if (this_00 != (Bullet *)0x0) {
      VStack_24.z = (float)&UNK_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_1_GetComponentInChildren_12
                          ((Component_1 *)this_00,
                           CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                          );
      if (this_01 != (Text *)0x0) {
        CubeBullet::CubeBullet_SetCubeMaterial
                  ((CubeBullet *)this_01,(this->fields).material,(MethodInfo *)0x0);
        if (isLocal != 0) {
          pBVar25 = (this_00->fields).onHitLocal;
          pUVar26 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar26,(Object *)this,
                     MethodInfo__PickupItemModelGun__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pBVar27 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar25,(Delegate *)pUVar26,(MethodInfo *)0x0);
          pBVar25 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar27 != (Bullet_OnHitDelegate *)0x0) {
            if (pBVar27->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar25 = pBVar27;
            }
            if (pBVar25 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          }
          (this_00->fields).onHitLocal = pBVar25;
        }
        pBVar25 = (this_00->fields).onHit;
        pUVar26 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar26,(Object *)this,
                   MethodInfo__PickupItemModelGun__HandleCubeHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar27 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar25,(Delegate *)pUVar26,(MethodInfo *)0x0);
        pBVar25 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar27 != (Bullet_OnHitDelegate *)0x0) {
          if (pBVar27->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar25 = pBVar27;
          }
          if (pBVar25 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        }
        (this_00->fields).onHit = pBVar25;
        pMVar28 = (this->fields)._._.owner;
        if (pMVar28 != (MVPickupOwner *)0x0) {
          pVVar23 = InventoryItem+ItemDescription::
                    InventoryItem_ItemDescription_get_CameraPreviewerOffset
                              (&VStack_24,(InventoryItem_ItemDescription *)pMVar28,(MethodInfo *)0x0)
          ;
          pMVar29 = (MonitorData *)pVVar23->y;
          fVar30 = pVVar23->z;
          pMVar28 = (this->fields)._._.owner;
          if (pMVar28 != (MVPickupOwner *)0x0) {
            pVVar23 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                (&VStack_24,pMVar28,(MethodInfo *)0x0);
            uVar31 = pVVar23->x;
            uVar32 = pVVar23->y;
            fVar33 = pVVar23->z;
            fVar34 = 0.0;
            func_?();
            pMVar28 = (this->fields)._._.owner;
            if (pMVar28 != (MVPickupOwner *)0x0) {
              speed = (MonitorData *)
                      MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                (pMVar28,(this->fields).speed,(MethodInfo *)0x0);
              range = (this->fields).range;
              pMVar28 = (this->fields)._._.owner;
              VStack_24.z = fVar34;
              VStack_24.y = fVar33;
              if (pMVar28 != (MVPickupOwner *)0x0) {
                ignoreWoIDs = (HashSet_1_System_Int32_ *)
                              (*(code *)(pMVar28->klass->vtable).get_IgnoreWOIDs.method)();
                lineOfFire.m_Origin.y = fVar30;
                lineOfFire.m_Origin.x = (float)pMVar29;
                lineOfFire.m_Origin.z = (float)uVar31;
                lineOfFire.m_Direction.x = (float)uVar32;
                lineOfFire.m_Direction.y = VStack_24.y;
                lineOfFire.m_Direction.z = VStack_24.z;
                Bullet::Bullet_Fire(this_00,(float)speed,range,lineOfFire,ignoreWoIDs,
                                    (MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                pTVar22 = (this->fields)._._.muzzlePoint;
                clip = (this->fields).firePrimary;
                if ((pTVar22 != (Transform *)0x0) &&
                   (pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(&VStack_24,pTVar22,(MethodInfo *)0x0),
                   this_02 != (AudioManager *)0x0)) {
                  AudioManager::AudioManager_Play
                            (this_02,StringLiteral_cubeFire,clip,*pVVar23,0.6,
                             SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
                  piVar35 = &(this->fields).currentAmmo;
                  *piVar35 = *piVar35 + -1;
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
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void OnFireSecondary(Boolean) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnFireSecondary
               (PickupItemModelGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff74,0,0x48);
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                      ((Component_1 *)this,
                       UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                      );
  if (pMVar1 != (MVInteractableBase *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              ((AudioSource *)pMVar1,(this->fields).releaseSound,(MethodInfo *)0x0);
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                        ((Component_1 *)this,
                         UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                        );
    if (pMVar1 != (MVInteractableBase *)0x0) {
      puVar2 = &UNK_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                ((AudioSource *)pMVar1,0,(MethodInfo *)0x0);
      pCVar3 = (Cube *)&UNK_?;
      pPVar4 = this;
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                          ((Component_1 *)this,
                           UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                          );
      if (pMVar1 != (MVInteractableBase *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  ((AudioSource *)pMVar1,(MethodInfo *)0x0);
        pMVar5 = (this->fields)._._.owner;
        if (pMVar5 != (MVPickupOwner *)0x0) {
          pVVar6 = InventoryItem+ItemDescription::
                    InventoryItem_ItemDescription_get_CameraPreviewerOffset
                              (&VStack_7,(InventoryItem_ItemDescription *)pMVar5,(MethodInfo *)0x0)
          ;
          iStack_8 = (int32_t)pVVar6->x;
          pCStack_9 = (Cube *)pVVar6->y;
          pMVar5 = (this->fields)._._.owner;
          if (pMVar5 != (MVPickupOwner *)0x0) {
            MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_7,pMVar5,(MethodInfo *)0x0);
            uVar10 = _iStack_c;
            func_?();
            id = (int32_t)uVar10;
            uVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               (StringLiteral_Player,(MethodInfo *)0x0);
            uVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               (StringLiteral_Logic,(MethodInfo *)0x0);
            ray.m_Direction.y = 0.0;
            ray.m_Direction.z = 0.0;
            auVar13 = SUB1612(ZEXT816(0),0);
            ray.m_Origin.x = (float)auVar13._0_4_;
            ray.m_Origin.y = (float)auVar13._4_4_;
            ray.m_Origin.z = (float)auVar13._8_4_;
            ray.m_Direction.x = (float)SUB164(ZEXT816(0),0xc);
            bVar14 = CollisionDetection::CollisionDetection_MVHit_1
                               (ray,(VoxelHit *)&stack0xffffff74,(this->fields).range,
                                (HashSet_1_System_Int32_ *)0x0,
                                ~(1 << (uVar11 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar12 & 0x1f)),
                                (MethodInfo *)0x0);
            if (bVar14 == 0) {
              puVar15 = (undefined8 *)func_?();
              _iStack_c = *puVar15;
              pPVar4 = *(PickupItemModelGun **)(puVar15 + 1);
            }
            else {
              pCStack_9 = pCVar3;
              iStack_8 = (int32_t)puVar2;
              VStack_7.z = (float)pPVar4;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
              iVar16 = (int16_t)this_01;
              puVar2 = &UNK_?;
              pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (this_01,id,(MethodInfo *)0x0);
              if (pMVar17 != (MVWorldObject *)0x0) {
                bVar18 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
                if (((pMVar17->klass->_1).naturalAligment < bVar18) ||
                   ((MVCubeModelFineGrainedTerrain__Class *)
                    (pMVar17->klass->_1).typeHierarchy[bVar18 - 1] !=
                    TypeInfo__MVCubeModelFineGrainedTerrain)) {
                  bVar19 = false;
                }
                else {
                  bVar19 = true;
                }
                pMVar20 = (MVWorldObject *)0x0;
                if (bVar19) {
                  pMVar20 = pMVar17;
                }
                if (pMVar20 != (MVWorldObject *)0x0) {
                  piVar21 = &(this->fields).currentAmmo;
                  *piVar21 = *piVar21 + 1;
                  if (isLocal != 0) {
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (this_02 == (MVNetworkGame *)0x0) goto code_?;
                    this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)CloudyTheme::CloudyTheme_get_Identifier
                                           ((CloudyTheme *)this_02,(MethodInfo *)0x0);
                    if (this_03 ==
                        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)0x0) goto code_?;
                    this_04 = (RuntimeEventManager *)
                              System.dll::System::Collections::Generic::
                              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                              ::Single,System::Object]::
                              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                        (this_03,(MethodInfo *)0x0);
                    pSStack_22 = (SingleCubeFineGrainedEvent *)func_?();
                    position_00.z = iVar16;
                    position_00._0_4_ = puVar2;
                    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
                    SingleCubeFineGrainedEvent__ctor_1(pSStack_22,position_00,(MethodInfo *)0x0);
                    if (this_04 == (RuntimeEventManager *)0x0) goto code_?;
                    RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                              (this_04,pSStack_22,(MethodInfo *)0x0);
                    pPVar4 = (PickupItemModelGun *)VStack_7.z;
                  }
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  this_05 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                      ((MethodInfo *)0x0);
                  if (this_05 == (AudioManager *)0x0) goto code_?;
                  position_01.z = (float)pPVar4;
                  position_01.x = (float)iStack_8;
                  position_01.y = (float)pCStack_9;
                  AudioManager::AudioManager_Play
                            (this_05,StringLiteral_cube_Destroyed,(this->fields).cubeDestroyedSound,
                             position_01,0.6,SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
                }
              }
            }
            this_00 = (this->fields)._._.muzzlePoint;
            original = (this->fields).railGunRayPrefab;
            if (this_00 != (Transform *)0x0) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)(auStack_23 + 4),this_00,(MethodInfo *)0x0);
              VStack_7.y = pVVar6->x;
              VStack_7.z = pVVar6->y;
              fVar24 = pVVar6->z;
              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                func_?();
              }
              pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                                  ((Quaternion *)auStack_23,(MethodInfo *)0x0);
              auStack_23._0_4_ = pQVar25->x;
              auStack_23._4_4_ = pQVar25->y;
              fStack_26 = pQVar25->z;
              fStack_27 = pQVar25->w;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              position.z = fVar24;
              position.x = VStack_7.y;
              position.y = VStack_7.z;
              rotation.y = (float)auStack_23._4_4_;
              rotation.x = (float)auStack_23._0_4_;
              rotation.z = fStack_26;
              rotation.w = fStack_27;
              pSVar28 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                                  ((SentryGunBeam *)original,position,rotation,
                                   RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                                  );
              if (pSVar28 != (SentryGunBeam *)0x0) {
                (pSVar28->fields).lineRenderer = (LineRenderer *)iStack_8;
                (pSVar28->fields).deleteTimer = (float)pCStack_9;
                *(PickupItemModelGun **)&(pSVar28->fields)._Active_k__BackingField = pPVar4;
                pCVar29 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                                    ((Color *)auStack_23,(MethodInfo *)0x0);
                fVar24 = pCVar29->g;
                fVar30 = pCVar29->b;
                fVar31 = pCVar29->a;
                (pSVar28->fields)._StartPosition_k__BackingField.y = pCVar29->r;
                (pSVar28->fields)._StartPosition_k__BackingField.z = fVar24;
                (pSVar28->fields)._EndPosition_k__BackingField.x = fVar30;
                (pSVar28->fields)._EndPosition_k__BackingField.y = fVar31;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnStateChanged
               (PickupItemModelGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_itemData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_00 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar3) {
      this_00 = pDVar1;
    }
    if (this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_material,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
      puVar5 = (uint8_t *)func_?();
      (this->fields).material = *puVar5;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_1_GetComponentInChildren_12
                          ((Component_1 *)this,
                           CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                          );
      if (this_01 != (Text *)0x0) {
        CubeBullet::CubeBullet_SetCubeMaterial
                  ((CubeBullet *)this_01,(this->fields).material,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pDVar1 = extraout_EDX;
code_?:
  func_?(pDVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnUnequip
               (PickupItemModelGun *this,MethodInfo *method)

{
  bVar1 = PickupItemModelGun_ShowCursors(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = (this->fields).primaryCursor;
  if (this_00 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_Destroy(this_00,(MethodInfo *)0x0);
    if ((this->fields).secondaryCursor != (GUICellCursor *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      (in_stack_2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_ResetAmmo
               (PickupItemModelGun *this,MethodInfo *method)

{
  iVar1 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,(this->fields).ammo,(this->klass->vtable).UpdateWithDirection.methodPtr);
  (this->fields).currentAmmo = iVar1;
  return;
}


/* Boolean ShowCursors() */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_ShowCursors
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMVar1 = (this->fields)._._.owner;
      if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
      pOVar3 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)pMVar1,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pOVar3->klass->_1).naturalAligment < bVar4) ||
           ((MVAvatarLocal__Class *)(pOVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
            TypeInfo__MVAvatarLocal)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pOVar6 = (Object *)0x0;
        if (bVar5) {
          pOVar6 = pOVar3;
        }
        if (pOVar6 != (Object *)0x0) {
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_TriggerBegin
               (PickupItemModelGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isFiring == 0) {
    if ((this->fields).waitingToFire == 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__PickupItemModelGun___DoAutoFire_c__Iterator0;
      this_00 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
      if (this_00 != (ScaleAnimationBase *)0x0) {
        (this_00->fields).originalScale.x = (float)this;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Got_TriggerStart__but_were_firin,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_Update
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = PickupItemModelGun_ShowCursors(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    PickupItemModelGun_HandleCursors(this,(MethodInfo *)0x0);
  }
  if ((this->fields).fireSecondary != 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                       );
    if (pMVar2 == (MVInteractableBase *)0x0) goto code_?;
    x = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                  ((AudioSource *)pMVar2,(MethodInfo *)0x0);
    y = (this->fields).chargeSound;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                         );
      if (pMVar2 == (MVInteractableBase *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                ((AudioSource *)pMVar2,(this->fields).chargeSound,(MethodInfo *)0x0);
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                         );
      if (pMVar2 == (MVInteractableBase *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                ((AudioSource *)pMVar2,1,(MethodInfo *)0x0);
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                         );
      if (pMVar2 == (MVInteractableBase *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                ((AudioSource *)pMVar2,(MethodInfo *)0x0);
    }
  }
  cVar3 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)();
  if (cVar3 != '\0') {
    pCVar4 = (this->fields).cubeBullet;
    if ((pCVar4 == (CubeBullet *)0x0) ||
       (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)pCVar4,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                           ), pMVar2 == (MVInteractableBase *)0x0)) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)pMVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pCVar4 = (this->fields).cubeBullet;
      if ((pCVar4 != (CubeBullet *)0x0) &&
         (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                             ((Component_1 *)pCVar4,
                              UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                             ), pMVar2 != (MVInteractableBase *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pMVar2,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  cVar3 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar3 != '\0') {
    return;
  }
  pCVar4 = (this->fields).cubeBullet;
  if ((pCVar4 != (CubeBullet *)0x0) &&
     (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)pCVar4,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                         ), pMVar2 != (MVInteractableBase *)0x0)) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)pMVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pCVar4 = (this->fields).cubeBullet;
    if ((pCVar4 != (CubeBullet *)0x0) &&
       (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)pCVar4,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                           ), pMVar2 != (MVInteractableBase *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)pMVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PickupItemModelGun() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun__ctor
               (PickupItemModelGun *this,MethodInfo *method)

{
  (this->fields).minDistanceToCubeFire = 0.8;
  (this->fields).ammo = 10;
  (this->fields).speed = 30.0;
  (this->fields).range = 200.0;
  (this->fields).fireIntervalSecondary = 1.3;
  (this->fields).currentAmmo = 10;
  (this->fields).fireMain = 1;
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


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_get_IsAmmoDepleted
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (0 < (this->fields).currentAmmo) {
    return 0;
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar1 == '\0';
}

