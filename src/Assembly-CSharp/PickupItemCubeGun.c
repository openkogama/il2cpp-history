
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Awake
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).ResetAmmo.method)
            (this,(this->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  pGVar1 = (this->fields).primaryCursor;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GUICellCursor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                     );
  (this->fields).primaryCursor = pGVar1;
  func_?(&(this->fields).primaryCursor,pGVar1);
  pGVar1 = (GUICellCursor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)(this->fields).secondaryCursor,
                      GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                     );
  (this->fields).secondaryCursor = pGVar1;
  func_?(&(this->fields).secondaryCursor,pGVar1);
  pGVar1 = (this->fields).primaryCursor;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean CanInsertCubeAtCubePos(IntVector) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_CanInsertCubeAtCubePos
               (PickupItemCubeGun *this,IntVector cubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_00,
                        MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                       );
    if (pOVar1 != (Object *)0x0) {
      gameObject = pOVar1[0x11].klass;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                ((Vector3 *)&stack0xffffffe0,(GameObject *)gameObject,cubePos,(MethodInfo *)0x0);
      if ((this->fields)._._.owner != (MVPickupOwner *)0x0) {
        fVar2 = (float10)func_?();
        return (this->fields).minDistanceToCubeFire <= (float)fVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void DoAutoFire() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_DoAutoFire
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).prevFireTime;
  bVar2 = (this->fields).fireSecondary;
  uVar3 = (this->fields).fireIntervalSecondary.currentCryptoKey;
  uVar4 = (this->fields).fireIntervalSecondary.hiddenValue.b1;
  uVar5 = (this->fields).fireIntervalSecondary.hiddenValue.b2;
  uVar6 = (this->fields).fireIntervalSecondary.hiddenValue.b3;
  uVar7 = (this->fields).fireIntervalSecondary.hiddenValue.b4;
  value.hiddenValue.b4 = uVar7;
  value.hiddenValue.b3 = uVar6;
  value.hiddenValue.b2 = uVar5;
  value.hiddenValue.b1 = uVar4;
  value.currentCryptoKey = uVar3;
  pBVar8 = (this->fields).fireIntervalSecondary.hiddenValueOld;
  fVar9 = (this->fields).fireIntervalSecondary.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValueOld = pBVar8;
  value.fakeValue = fVar9;
  value.inited = (this->fields).fireIntervalSecondary.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x11;
  fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  (this->fields).fireSecondary = fVar9 < fVar1;
  (this->fields).fireMain = fVar1 <= fVar9;
  if ((fVar9 < fVar1) && (bVar2 == 0)) {
    this_00 = (this->fields).chargeObject;
    if ((this_00 != (Transform *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  return;
}


/* Boolean DoLineOfFireCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_DoLineOfFireCheck
               (PickupItemCubeGun *this,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uStack_2._0_4_ = (pMVar1->fields).lookOrigin.x;
    uStack_2._4_4_ = (pMVar1->fields).lookOrigin.y;
    fVar3 = (pMVar1->fields).lookOrigin.z;
    pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       (&VStack_5,(this->fields)._._.owner,(MethodInfo *)0x0);
    uVar6 = uStack_2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_5,*pVVar4,(MethodInfo *)0x0);
    uVar7 = pVVar4->x;
    uVar8 = pVVar4->y;
    fVar9 = pVVar4->z;
    iVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    p_Var11 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_AsRef_1((Void *)(1 << ((byte)iVar10 & 0x1f)),(MethodInfo *)0x0);
    distance = (this->fields).range;
    this_00 = (HashSet_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>,uVar6);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields)._._.owner;
    if (((pMVar1 != (MVPickupOwner *)0x0) &&
        (pMVar11 = (pMVar1->fields)._.worldObjectParent, pMVar11 != (MVWorldObjectClient *)0x0)) &&
       (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_00,(pMVar11->fields)._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      p_Var11 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_1((Void *)p_Var11,(MethodInfo *)0x0);
      ray.m_Origin.y = 0.0;
      ray.m_Origin.x = (float)p_Var11;
      ray.m_Origin.z = fVar3;
      ray.m_Direction.x = (float)uVar7;
      ray.m_Direction.y = (float)uVar8;
      ray.m_Direction.z = fVar9;
      bVar12 = CollisionDetection::CollisionDetection_MVHit_1
                        (ray,hit,distance,this_00,(int32_t)p_Var11,(MethodInfo *)0x0);
      return bVar12;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Void Execute() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Execute
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).prevFireTime;
  iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
  AVar4 = (this->fields)._.fireInterval.hiddenValue;
  pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
  fVar6 = (this->fields)._.fireInterval.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = fVar1 - fVar2;
  value.hiddenValue = AVar4;
  value.currentCryptoKey = iVar3;
  value.hiddenValueOld = pBVar5;
  value.fakeValue = fVar6;
  value.inited = (this->fields)._.fireInterval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
  fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if (fVar1 <= fVar2) {
    (this->fields).waitingToFire = 1;
  }
  else {
    if ((this->fields).fireMain != 0) {
      pMVar7 = (this->fields)._._.owner;
      if (pMVar7 == (MVPickupOwner *)0x0) goto code_?;
      (*(code *)(this->klass->vtable).OnFire.method)
                (this,(pMVar7->fields)._IsLocal_k__BackingField,
                 (this->klass->vtable).OnDestroy.methodPtr);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).prevFireTime = fVar2;
    }
    if ((this->fields).fireSecondary != 0) {
      pMVar7 = (this->fields)._._.owner;
      if (pMVar7 != (MVPickupOwner *)0x0) {
        PickupItemCubeGun_OnFireSecondary
                  (this,(pMVar7->fields)._IsLocal_k__BackingField,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this->fields).chargeObject;
        (this->fields).prevFireTime = fVar2;
        if (this_00 != (Transform *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* IntVector GetCubePos(VoxelHit) */

IntVector Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetCubePos
                    (VoxelHit voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  fVar1 = voxelHit.point.x;
  *(undefined4 *)voxelHit.point.x = 0;
  *(undefined2 *)((int)voxelHit.point.x + 4) = 0;
  voxelHit_00.interactionFlags._4_4_ = method;
  voxelHit_00.interactionFlags._0_4_ = voxelHit.interactionFlags._4_4_;
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
  voxelHit_00._60_4_ = (MVWorldObjectClientManager *)voxelHit.interactionFlags;
  bVar2 = PickupItemCubeGun_GetCubePosFromFineGrainedTerrain
                    (voxelHit_00,0.2,(IntVector *)voxelHit.point.x,(MethodInfo *)0x0);
  iVar3 = extraout_DX;
  if (bVar2 == 0) {
    voxelHit.interactionFlags._0_4_ = (MVWorldObjectClientManager *)0x0;
    voxelHit._60_4_ = &UNK_?;
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this != (MVWorldObjectClientManager *)0x0) {
      voxelHit.interactionFlags._4_4_ =
           MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
      ;
      voxelHit._60_4_ = &UNK_?;
      voxelHit.interactionFlags._0_4_ = this;
      pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this,
                          MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                         );
      if (pOVar4 != (Object *)0x0) {
        pOVar5 = pOVar4[0x11].klass;
        voxelHit.interactionFlags._0_4_ =
             (MVWorldObjectClientManager *)(voxelHit.point.y + voxelHit.normal.y * _UNK_?);
        method = (MethodInfo *)(voxelHit.normal.x + (float)voxelHit.cubePos._0_4_ * _UNK_?);
        voxelHit.interactionFlags._4_4_ =
             (MethodInfo *)(voxelHit.point.z + voxelHit.normal.z * _UNK_?);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          pSStack6 = TypeInfo__SharedCubeFunctions;
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        fVar7 = (float)voxelHit.interactionFlags._4_4_;
        fVar8 = (float)(MVWorldObjectClientManager *)voxelHit.interactionFlags;
        pSStack6 = (SharedCubeFunctions__Class *)0x0;
        voxelHit._60_4_ = (MVWorldObjectClientManager *)voxelHit.interactionFlags;
        voxelHit.interactionFlags._0_4_ =
             (MVWorldObjectClientManager *)voxelHit.interactionFlags._4_4_;
        voxelHit.interactionFlags._4_4_ = method;
        pMVar9 = voxelHit.interactionFlags._4_4_;
        voxelHit.collider = (Collider *)((int)&voxelHit.interactionFlags + 4);
        voxelHit.distance = (float)&UNK_?;
        point.y = fVar8;
        point.x = (float)pOVar5;
        point.z = fVar7;
        voxelHit.interactionFlags._4_1_ = (bool)method;
        bVar2 = voxelHit.interactionFlags._4_1_;
        voxelHit.transform = (Transform *)pOVar5;
        voxelHit.interactionFlags._4_4_ = pMVar9;
        IVar10 = SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                           ((GameObject *)voxelHit.collider,point,bVar2,(MethodInfo *)0x0);
        iVar3 = IVar10.z;
        uVar11 = *(undefined2 *)(IVar10._0_4_ + 1);
        *(undefined4 *)fVar1 = *IVar10._0_4_;
        *(undefined2 *)((int)fVar1 + 4) = uVar11;
        goto code_?;
      }
    }
    func_?();
    pcVar12 = (code *)swi(3);
    IVar10 = (IntVector)(*pcVar12)();
    return IVar10;
  }
code_?:
  IVar10.z = iVar3;
  IVar10._0_4_ = fVar1;
  return IVar10;
}


/* Boolean GetCubePosFromFineGrainedTerrain(VoxelHit, Single, IntVector ByRef) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetCubePosFromFineGrainedTerrain
               (VoxelHit voxelHit,float maxDistanceToEdge,IntVector *pos,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    func_?(&TypeRef__Edge);
    func_?(&TypeInfo__Edge);
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__Face);
    func_?(&TypeInfo__MV__WorldObject__Face);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  fVar2 = 0.0;
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this,voxelHit.woId,(MethodInfo *)0x0);
  if (pMVar5 != (MVWorldObject *)0x0) {
    if (((pMVar5->klass->_1).naturalAligment <
         (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment) ||
       ((MVCubeModelFineGrainedTerrain__Class *)
        (pMVar5->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar7 = (MVWorldObject *)0x0;
    if (bVar6) {
      pMVar7 = pMVar5;
    }
    if (pMVar7 != (MVWorldObject *)0x0) {
      gameObject = pMVar5[1].fields.inputLinkRefs;
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      edge = Cube::Cube_GetEdge_1
                       ((GameObject *)gameObject,voxelHit.cube,voxelHit.face,voxelHit.point,
                        voxelHit.cubePos,(MethodInfo *)0x0);
      edge_00 = Cube::Cube_GetEdgeVerticesWorld
                          ((GameObject *)pMVar5[1].fields.inputLinkRefs,voxelHit.cube,voxelHit.face,
                           edge,voxelHit.cubePos,(MethodInfo *)0x0);
      if (edge_00 != (Vector3__Array *)0x0) {
        if ((edge_00->max_length == 0) || (edge_00->max_length < 2)) {
          func_?();
        }
        else {
          bVar4 = MathFunctions::MathFunctions_DistancePointLine
                            (voxelHit.point,edge_00->vector[0],edge_00->vector[1],
                             (float *)&stack0xffffffdc,(MethodInfo *)0x0);
          pIVar8 = TypeRef__MV__WorldObject__Face;
          if ((bVar4 == 0) || (maxDistanceToEdge <= fVar2)) goto code_?;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
          if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pAVar9 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
          if (pAVar9 != (Array *)0x0) {
            pIVar10 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar9,(MethodInfo *)0x0);
            piVar11 = (int *)&stack0xffffffd8;
            uVar12 = voxelHit._28_4_;
            iVar13 = voxelHit.cubePos.y;
            fVar2 = voxelHit.point.y;
            pVVar14 = (Vector3__Array *)voxelHit.point.z;
            fVar15 = voxelHit.normal.x;
            method_01 = (MethodInfo *)voxelHit.normal.y;
            fVar16 = voxelHit.normal.z;
            iVar17 = voxelHit.cubePos.x;
            iVar18 = voxelHit.face;
            uVar19 = voxelHit._36_4_;
            iVar20 = voxelHit.woId;
            pCVar21 = voxelHit.cube;
            fVar22 = voxelHit.distance;
            pCVar23 = voxelHit.collider;
            pTVar24 = voxelHit.transform;
            while (pIVar10 != (IEnumerator *)0x0) {
              iVar25 = 0;
              cVar26 = func_?();
              if (cVar26 == '\0') {
                iVar25 = func_?();
                *piVar11 = iVar25;
                if (iVar25 != 0) {
                  func_?();
                }
                goto code_?;
              }
              if (iVar25 == 0) break;
              pIVar10 = (IEnumerator *)0x1;
              piVar27 = (int *)func_?();
              if (piVar27 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar27 + 0x20) !=
                  (TypeInfo__MV__WorldObject__Face->_0).element_class) goto code_?;
              puVar28 = (undefined4 *)func_?();
              pIVar8 = TypeRef__Edge;
              method_00 = (MethodInfo *)*puVar28;
              if (method_00 != (MethodInfo *)voxelHit.face) {
                if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                uVar29 = SUB42(pIVar8,0);
                uVar30 = (undefined2)((uint)pIVar8 >> 0x10);
                wo = (MVWorldObjectClient *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar8,(MethodInfo *)0x0);
                if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                puVar31 = &UNK_?;
                pAVar9 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)wo,(MethodInfo *)0x0);
                if (pAVar9 == (Array *)0x0) break;
                pIVar10 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar9,(MethodInfo *)0x0);
                uVar32 = SUB42(pIVar10,0);
                uStack_33 = (undefined2)((uint)pIVar10 >> 0x10);
                while( true ) {
                  if (CONCAT22(uStack_33,uVar32) == 0) goto code_?;
                  uVar32 = SUB42(TypeInfo__System__Collections__IEnumerator,0);
                  uStack_33 = (undefined2)((uint)TypeInfo__System__Collections__IEnumerator >> 0x10)
                  ;
                  pIVar10 = (IEnumerator *)0x0;
                  cVar26 = func_?();
                  if (cVar26 == '\0') break;
                  if ((CONCAT22(uStack_33,uVar32) == 0) ||
                     (piVar11 = (int *)func_?(), piVar11 == (int *)0x0))
                  goto code_?;
                  if (*(Il2CppClass **)(*piVar11 + 0x20) != (TypeInfo__Edge->_0).element_class)
                  goto code_?;
                  uVar32 = 0x59b4;
                  uStack_33 = 0x1069;
                  pfVar34 = (float *)func_?();
                  face = *pfVar34;
                  if (face != 0.0) {
                    fVar35 = 0.0;
                    voxelHit_00.normal.z._2_2_ = iVar13;
                    voxelHit_00.normal.z._0_2_ = iVar17;
                    voxelHit_00.point.y = (float)pVVar14;
                    voxelHit_00.point.x = fVar2;
                    voxelHit_00.point.z = fVar15;
                    voxelHit_00.normal.x = (float)method_01;
                    voxelHit_00.normal.y = fVar16;
                    voxelHit_00.cubePos.x = (short)uVar12;
                    voxelHit_00.cubePos.y = (short)((uint)uVar12 >> 0x10);
                    voxelHit_00._28_4_ = iVar18;
                    voxelHit_00.face = uVar19;
                    voxelHit_00._36_4_ = iVar20;
                    voxelHit_00.woId = (int32_t)pCVar21;
                    voxelHit_00.cube = (Cube *)fVar22;
                    voxelHit_00.distance = (float)pCVar23;
                    voxelHit_00.collider = (Collider *)pTVar24;
                    voxelHit_00.transform._0_2_ = voxelHit._60_2_;
                    voxelHit_00.transform._2_2_ = voxelHit._62_2_;
                    voxelHit_00._60_4_ = (undefined4)voxelHit.interactionFlags;
                    voxelHit_00.interactionFlags._0_4_ = voxelHit.interactionFlags._4_4_;
                    voxelHit_00.interactionFlags._4_4_ = method_00;
                    pVVar14 = edge_00;
                    iVar36 = PickupItemCubeGun_GetEdgeVertexMatchCount
                                       (wo,voxelHit_00,(Face__Enum)face,(Edge__Enum)edge_00,
                                        (Vector3__Array *)0x0,method_01);
                    uVar37 = (undefined2)((uint)puVar31 >> 0x10);
                    fVar2 = face;
                    fVar15 = fVar35;
                    if (iVar36 == 2) {
                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      this_00 = (MVCubeModelBase *)CONCAT22(uVar37,voxelHit.cubePos.z);
                      IVar38.z = voxelHit.cubePos.x;
                      IVar38._0_4_ = &stack0xffffff64;
                      IVar38 = Cube::Cube_GetCubePosAboveFace(IVar38,(Face__Enum)this_00,method_00);
                      pIVar39 = IVar38._0_4_;
                      iVar13 = pIVar39->y;
                      iVar17 = pIVar39->z;
                      IVar38 = *pIVar39;
                      pos->x = pIVar39->x;
                      pos->y = iVar13;
                      pos->z = iVar17;
                      if (this_00 != (MVCubeModelBase *)0x0) {
                        pCVar21 = MVCubeModelBase::MVCubeModelBase_GetCube
                                            (this_00,IVar38,(MethodInfo *)0x0);
                        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor ==
                            0) {
                          func_?();
                        }
                        bVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                          ((CubeBase *)pCVar21,(CubeBase *)0x0,(MethodInfo *)0x0);
                        func_?();
                        func_?();
                        *unaff_FS_OFFSET = pCVar21;
                        return bVar4;
                      }
                      goto code_?;
                    }
                  }
                }
                func_?();
                piVar11 = (int *)CONCAT22(uVar30,uVar29);
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  *unaff_FS_OFFSET = uVar1;
  return 0;
}


/* Int32 GetEdgeVertexMatchCount(MVWorldObjectClient, VoxelHit, Face, Edge, Vector3[]) */

int32_t Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetEdgeVertexMatchCount
                  (MVWorldObjectClient *wo,VoxelHit voxelHit,Face__Enum face,Edge__Enum edge,
                  Vector3__Array *edgeVerticesCubeHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    gameObject = (wo->fields).gameObject;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    iStack_1 = 0;
    pVVar2 = Cube::Cube_GetEdgeVerticesWorld
                       (gameObject,(Cube *)voxelHit.woId,voxelHit.interactionFlags._4_4_,face,
                        voxelHit._20_6_,(MethodInfo *)0x0);
    fVar3 = 0.0;
    if (pVVar2 != (Vector3__Array *)0x0) {
      pVVar4 = pVVar2->vector;
      uVar5 = 0;
      while( true ) {
        if ((int)pVVar2->max_length <= (int)fVar3) {
          return iStack_1;
        }
        if (pVVar2->max_length <= uVar5) break;
        uVar6 = pVVar4->x;
        uVar7 = pVVar4->y;
        fVar8 = pVVar4->z;
        if (edge == Edge__Enum_None) goto code_?;
        if (*(int *)(edge + 0xc) == 0) break;
        uVar9 = *(undefined8 *)(edge + 0x10);
        fVar3 = *(float *)(edge + 0x18);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        fStack_10 = (float)uVar9;
        fStack_11 = (float)((ulonglong)uVar9 >> 0x20);
        fStack_10 = fStack_10 - (float)uVar6;
        fVar3 = fVar3 - fVar8;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar12 = (double)((fStack_11 - (float)uVar7) * (fStack_11 - (float)uVar7) +
                          fStack_10 * fStack_10 + fVar3 * fVar3);
        if (dVar12 < 0.0) {
          func_?();
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        iVar13 = iStack_1 + 1;
        if (_UNK_? <= (float)dVar12) {
          iVar13 = iStack_1;
        }
        func_?((short)auStack_14,1);
        pVVar4 = pVVar4 + 1;
        fVar15 = (float10)func_?(CONCAT44(fVar8,uVar7),auStack_14[0],
                                          CONCAT44(pVStack_16,fVar8),fStack_10,0);
        pVVar2 = pVStack_16;
        uVar5 = uStack_17;
        iStack_1 = iVar13 + 1;
        if (_UNK_? <= (float)fVar15) {
          iStack_1 = iVar13;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
}


/* Void HandleCursors() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_HandleCursors
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x2054);
    func_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x48);
  bVar1 = PickupItemCubeGun_DoLineOfFireCheck(this,(VoxelHit *)&stack0xffffffa4,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar2 = (this->fields).primaryCursor;
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
code_?:
    pGVar2 = (this->fields).secondaryCursor;
    if (pGVar2 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((this->fields).fireSecondary == 0) {
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      voxelHit.normal.x._2_2_ = uStack_3;
      voxelHit.normal.x._0_2_ = in_stack_4;
      voxelHit.point.y = in_stack_5;
      voxelHit.point.x = (float)auStack_6;
      voxelHit.point.z = in_stack_7;
      voxelHit.normal.y._0_2_ = SUB42(in_stack_8,0);
      voxelHit.normal.y._2_2_ = (short)((uint)in_stack_8 >> 0x10);
      voxelHit.normal.z = fStack_9;
      voxelHit.cubePos.x = SUB42(in_stack_10,0);
      voxelHit.cubePos.y = (short)((uint)in_stack_10 >> 0x10);
      voxelHit.cubePos.z = (int16_t)in_stack_11;
      voxelHit._30_2_ = SUB42(in_stack_11,2);
      voxelHit.face = in_stack_12;
      voxelHit._36_4_ = iStack_13;
      voxelHit.woId = uStack_14;
      voxelHit.cube = (Cube *)iStack_15;
      voxelHit.distance = (float)pCStack_16;
      voxelHit.collider._0_2_ = SUB42(fStack_17,0);
      voxelHit.collider._2_2_ = (short)((uint)fStack_17 >> 0x10);
      voxelHit.transform = (Transform *)pCStack_18;
      voxelHit._60_4_ = pTStack_19;
      voxelHit.interactionFlags._0_4_ = uStack_20;
      voxelHit.interactionFlags._4_4_ = (int)iStack_21;
      IVar22 = PickupItemCubeGun_GetCubePos(voxelHit,(MethodInfo *)((ulonglong)iStack_21 >> 0x20));
      pIVar23 = IVar22._0_4_;
      uStack_24._0_2_ = pIVar23->x;
      uStack_24._2_2_ = pIVar23->y;
      iStack_25 = pIVar23->z;
      bVar1 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,*pIVar23,(MethodInfo *)0x0);
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
      IVar22 = (pGVar2->fields).pos;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar26 = uStack_24;
      a.z = iStack_25;
      a.x = (undefined2)uStack_24;
      a.y = uStack_24._2_2_;
      bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                        (a,IVar22,(MethodInfo *)0x0);
      pGVar2 = (this->fields).primaryCursor;
      if (bVar1 == 0) {
        if (pGVar2 != (GUICellCursor *)0x0) {
          if ((pGVar2->fields).fadeState == 1) {
            return;
          }
          GUICellCursor::GUICellCursor_set_FadeState
                    (pGVar2,FadeState__Enum_FadeIn,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pMVar27 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar27 == (MVWorldObjectClientManager *)0x0) ||
          (pOVar28 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (pMVar27,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              ), uVar29 = uStack_24, pOVar28 == (Object *)0x0)) ||
         (pGVar2 == (GUICellCursor *)0x0)) goto code_?;
      IVar22.z = iStack_25;
      uStack_24._0_2_ = (undefined2)uVar26;
      uStack_24._2_2_ = SUB42(uVar26,2);
      IVar22.x = (undefined2)uStack_24;
      IVar22.y = uStack_24._2_2_;
      uStack_24 = uVar29;
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar2,IVar22,(GameObject *)pOVar28[0x11].klass,(MethodInfo *)0x0);
      pGVar2 = (this->fields).primaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar2 = (this->fields).primaryCursor;
    }
    else {
      pGVar2 = (this->fields).primaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      iVar30 = (int16_t)in_stack_12;
      pMVar27 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar27 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar31 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar27,iStack_15,(MethodInfo *)0x0);
      if (((pMVar31 == (MVWorldObject *)0x0) ||
          ((pMVar31->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment)) ||
         ((MVCubeModelFineGrainedTerrain__Class *)
          (pMVar31->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
          TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
      uStack_24 = CONCAT22(iVar30,(undefined2)uStack_24);
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      auStack_6[0]._0_2_ = (pGVar2->fields).pos.x;
      auStack_6[0]._2_2_ = (pGVar2->fields).pos.y;
      iStack_25 = (pGVar2->fields).pos.z;
      uVar26 = in_stack_11;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      a_00.z = uStack_24._2_2_;
      a_00.x = (int16_t)in_stack_11;
      a_00.y = SUB42(in_stack_11,2);
      b.z = iStack_25;
      b.x = (undefined2)auStack_6[0];
      b.y = auStack_6[0]._2_2_;
      bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                        (a_00,b,(MethodInfo *)0x0);
      pGVar2 = (this->fields).secondaryCursor;
      if (bVar1 == 0) {
        if (pGVar2 != (GUICellCursor *)0x0) {
          if ((pGVar2->fields).fadeState == 1) {
            return;
          }
          GUICellCursor::GUICellCursor_set_FadeState
                    (pGVar2,FadeState__Enum_FadeIn,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      position.z = iVar30;
      position.x = (int16_t)uVar26;
      position.y = SUB42(uVar26,2);
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar2,position,(GameObject *)pMVar31[1].fields.inputLinkRefs,(MethodInfo *)0x0);
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar2 = (this->fields).secondaryCursor;
    }
    if (pGVar2 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeIn,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnEnterVehicleWithWeapon
               (PickupItemCubeGun *this,MethodInfo *method)

{
  (this->fields).hasLeftVehicle = 0;
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnEquip
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_Hold_shoot_button_to_remove_cube);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  PickupItemWithDelay::PickupItemWithDelay_OnEquip((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  pMVar2 = (pPVar1->fields)._._.owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    if ((pMVar2->fields)._IsLocal_k__BackingField != 0) {
      this_00 = (MethodInfo *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (PickupItemCubeGun *)CONCAT13(1,this._0_3_);
      key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      value = TM::TM__(StringLiteral_Hold_shoot_button_to_remove_cube,(MethodInfo *)0x0);
      if (this_00 == (MethodInfo *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,key,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = (PickupItemCubeGun *)0xf;
      method = this_00;
      NotificationController::NotificationController_PushNotification_2
                (NotificationType__Enum_PlayerTip,
                 (Dictionary_2_System_Object_System_Object_ *)this_00,
                 NotificationLifetime__Enum_High,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnFire
               (PickupItemCubeGun *this,bool isLocal,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  func_?(&fStack_2,0,0x48);
  if ((((this->fields).hasLeftVehicle == 0) && ((this->fields).fireSecondary == 0)) &&
     (cVar3 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                        (this,(this->klass->vtable).CanFire.methodPtr), cVar3 == '\0')) {
    bVar4 = PickupItemCubeGun_DoLineOfFireCheck(this,(VoxelHit *)&fStack_2,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      voxelHit.point.y = fStack_2;
      voxelHit.point.x = (float)&stack0xfffffff4;
      voxelHit.point.z = fStack_5;
      voxelHit.normal.x = fStack_6;
      voxelHit.normal.y = fStack_7;
      voxelHit.normal.z = fStack_8;
      voxelHit.cubePos._0_4_ = fStack_9;
      voxelHit.cubePos.z = IStack_10.x;
      voxelHit._30_2_ = IStack_10.y;
      voxelHit.face = stack0xffffff9c;
      voxelHit._36_4_ = iStack_11;
      voxelHit.woId = uStack_12;
      voxelHit.cube = (Cube *)puStack_13;
      voxelHit.distance = (float)in_stack_14;
      voxelHit.collider = (Collider *)in_stack_15;
      voxelHit.transform = (Transform *)in_stack_16;
      voxelHit._60_4_ = in_stack_17;
      voxelHit.interactionFlags._0_4_ = in_stack_18;
      voxelHit.interactionFlags._4_4_ = in_stack_19;
      IVar20 = PickupItemCubeGun_GetCubePos
                         (voxelHit,(MethodInfo *)
                                   (CONCAT26(in_stack_21,
                                             CONCAT24(in_stack_22,in_stack_19)) >> 0x20)
                         );
      bVar4 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,*IVar20._0_4_,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
    }
    this_01 = (this->fields)._._.muzzlePoint;
    pMVar23 = (this->fields)._._.owner;
    if (this_01 != (Transform *)0x0) {
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&pVStack_25,this_01,(MethodInfo *)0x0);
      fVar26 = pVVar24->z;
      pCVar27 = CubeGunBulletObject::CubeGunBulletObject_Create
                          (pMVar23,*pVVar24,(this->fields).material,(MethodInfo *)0x0);
      pMVar23 = (this->fields)._._.owner;
      if (pMVar23 != (MVPickupOwner *)0x0) {
        this_00 = (pMVar23->fields).lookOrigin.y;
        pVVar24 = (Vector3 *)&stack0xffffffe4;
        MVPickupOwner::MVPickupOwner_get_LookDirection
                  ((Vector3 *)&stack0xffffffe4,(MVPickupOwner *)this_00,(MethodInfo *)0x0);
        pVStack_25 = pVVar24;
        func_?();
        if (pCVar27 != (CubeGunBulletObject *)0x0) {
          pMVar23 = (this->fields)._._.owner;
          this_02 = (pCVar27->fields).bullet;
          if (pMVar23 != (MVPickupOwner *)0x0) {
            projectileSpeed = (this->fields).speed;
            uVar28 = 0;
            speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar23,projectileSpeed,(MethodInfo *)0x0);
            range = (this->fields).range;
            pMVar23 = (this->fields)._._.owner;
            if (pMVar23 != (MVPickupOwner *)0x0) {
              puVar29 = &UNK_?;
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar23->klass->vtable).get_IgnoreWOIDs.method)();
              if (this_02 != (Bullet *)0x0) {
                lineOfFire.m_Origin.y = (float)uVar28;
                lineOfFire.m_Origin.x = projectileSpeed;
                lineOfFire.m_Origin.z = (float)puVar29;
                lineOfFire.m_Direction.x._0_2_ = (short)pMVar23;
                lineOfFire.m_Direction.x._2_2_ = (short)((uint)pMVar23 >> 0x10);
                lineOfFire.m_Direction.y = 0.0;
                lineOfFire.m_Direction.z = fVar26;
                Bullet::Bullet_Fire(this_02,speed,range,lineOfFire,ignoreWoIDs,0,(MethodInfo *)0x0);
                iVar30 = (this->fields).currentAmmo.currentCryptoKey;
                fVar26 = (float)(this->fields).currentAmmo.hiddenValue;
                uVar31 = (this->fields).currentAmmo.fakeValue;
                uVar32 = (this->fields).currentAmmo.inited;
                uVar33 = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                this._1_3_ = uVar33;
                this._0_1_ = uVar32;
                iVar34 = uVar31;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                iVar35 = (int32_t)fVar26;
                iVar36 = iVar30;
                value._0_8_ = CONCAT44(iVar35,iVar36);
                value = (ObscuredInt)CONCAT88(uVar37,value._0_8_);
                iVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                pOVar38 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Implicit
                                    ((ObscuredInt *)&stack0xffffffe0,iVar30 + -1,(MethodInfo *)0x0);
                iVar30 = pOVar38->hiddenValue;
                iVar39 = pOVar38->fakeValue;
                bVar4 = pOVar38->inited;
                uVar40 = *(undefined3 *)&pOVar38->field_0xd;
                (pPVar1->fields).currentAmmo.currentCryptoKey = pOVar38->currentCryptoKey;
                (pPVar1->fields).currentAmmo.hiddenValue = iVar30;
                (pPVar1->fields).currentAmmo.fakeValue = iVar39;
                (pPVar1->fields).currentAmmo.inited = bVar4;
                *(undefined3 *)&(pPVar1->fields).currentAmmo.field_0xd = uVar40;
                return;
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar41 = (code *)swi(3);
    (*pcVar41)();
    return;
  }
  return;
}


/* Void OnFireSecondary(Boolean) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnFireSecondary
               (PickupItemCubeGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_);
    func_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_CubeGun);
    func_?(&StringLiteral_Player);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff6c,0,0x48);
  this_03 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  pTVar1 = (this->fields)._._.muzzlePoint;
  audioSource = (this->fields).audioSource;
  if ((pTVar1 == (Transform *)0x0) ||
     (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0),
     this_03 == (AudioManager *)0x0)) {
code_?:
    func_?();
  }
  else {
    AudioManager::AudioManager_Play_2
              (this_03,StringLiteral_CubeGun,audioSource,*pVVar2,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._._.owner;
    if (pMVar3 == (MVPickupOwner *)0x0) goto code_?;
    uVar4._0_4_ = (MethodInfo *)(pMVar3->fields).lookOrigin.x;
    fStack_5 = (pMVar3->fields).lookOrigin.y;
    fVar6 = (pMVar3->fields).lookOrigin.z;
    pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        ((Vector3 *)(auStack_7 + 4),(this->fields)._._.owner,(MethodInfo *)0x0);
    fVar8 = (float)uVar4;
    fVar9 = SUB84(uVar4,4);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)(auStack_7 + 4),*pVVar2,(MethodInfo *)0x0);
    fVar10 = pVVar2->x;
    uVar11 = pVVar2->y;
    fVar12 = pVVar2->z;
    uVar13 = (undefined2)uVar11;
    uVar14 = (undefined2)((uint)uVar11 >> 0x10);
    uVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Player,(MethodInfo *)0x0);
    uVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Logic,(MethodInfo *)0x0);
    ray.m_Direction.y._2_2_ = uVar14;
    ray.m_Direction.y._0_2_ = uVar13;
    layerMask = (float)(~(1 << (uVar15 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar16 & 0x1f)));
    fVar17 = 0.0;
    ray.m_Origin.y = fVar9;
    ray.m_Origin.x = fVar8;
    ray.m_Origin.z = fVar6;
    ray.m_Direction.x = fVar10;
    ray.m_Direction.z = fVar12;
    bVar18 = CollisionDetection::CollisionDetection_MVHit_1
                       (ray,(VoxelHit *)&stack0xffffff6c,(this->fields).range,
                        (HashSet_1_System_Int32_ *)0x0,(int32_t)layerMask,(MethodInfo *)0x0);
    if (bVar18 == 0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          ((Vector3 *)(auStack_7 + 4),(Ray *)&stack0xffffffc8,(this->fields).range,
                           (MethodInfo *)0x0);
      uVar4._0_4_ = (MethodInfo *)pVVar2->x;
      fStack_5 = pVVar2->y;
      fStack_19 = pVVar2->z;
code_?:
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar20 = TypeInfo__PrefabPool->static_fields->instance;
      if (((pPVar20 != (PrefabPool *)0x0) &&
          (this_02 = (pPVar20->fields).enumPoolManager, this_02 != (EnumPoolManager *)0x0)) &&
         (this_06 = (RailRay *)
                    EnumPoolManager::EnumPoolManager_Instantiate
                              (this_02,PoolEnums__Enum_CubeGunRay,
                               RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_)
         , this_06 != (RailRay *)0x0)) {
        (this_06->fields).target.x = (float)(MethodInfo *)uVar4;
        (this_06->fields).target.y = fStack_5;
        (this_06->fields).target.z = fStack_19;
        this_07 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_06,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._._.muzzlePoint;
        if ((pTVar1 != (Transform *)0x0) &&
           (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)(auStack_7 + 4),pTVar1,(MethodInfo *)0x0),
           this_07 != (Transform *)0x0)) {
          value_01.z._2_2_ = (short)((uint)pVVar2->z >> 0x10);
          value_01._0_10_ = *(unkbyte10 *)pVVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (this_07,value_01,(MethodInfo *)0x0);
          RailRay::RailRay_Reset(this_06,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    fStack_5 = fVar17;
    uVar4._0_4_ = (MethodInfo *)layerMask;
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_05 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_04,in_stack_21,(MethodInfo *)0x0);
    if (in_stack_22 == 0) goto code_?;
    pMVar23 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar23 == (MVNetworkGame *)0x0) ||
        (this_00 = (pMVar23->fields)._MaterialRepository_k__BackingField,
        this_04 == (MVWorldObjectClientManager *)0x0)) ||
       (pMVar24 = (this_04->fields).worldObjectMapping,
       pMVar24 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0)) goto code_?;
    if ((pMVar24->fields).gameObjectIdToWorldObjectIdMap !=
        (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      if ((this_00 != (MVMaterialRepository *)0x0) &&
         (pMVar25 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_00,*(uint8_t *)&(pMVar24->fields).typeWorldObjectTypeMap,
                               (MethodInfo *)0x0), pMVar25 != (MVMaterial *)0x0)) {
        fVar10 = (pMVar25->fields)._PhysicalProperties_k__BackingField.toughness;
        if (fVar10 != 0.0) {
          auStack_7._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
          auStack_7._4_4_ = (this->fields).currentAmmo.hiddenValue;
          iStack_26 = (this->fields).currentAmmo.fakeValue;
          bStack_27 = (this->fields).currentAmmo.inited;
          uStack_28 = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value.hiddenValue = auStack_7._4_4_;
          value.currentCryptoKey = auStack_7._0_4_;
          value.fakeValue = iStack_26;
          value.inited = bStack_27;
          value._13_3_ = uStack_28;
          iVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          pOVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit
                              ((ObscuredInt *)auStack_7,iVar29 + 1,(MethodInfo *)0x0);
          iVar29 = pOVar30->hiddenValue;
          iVar31 = pOVar30->fakeValue;
          bVar18 = pOVar30->inited;
          uVar32 = *(undefined3 *)&pOVar30->field_0xd;
          (this->fields).currentAmmo.currentCryptoKey = pOVar30->currentCryptoKey;
          (this->fields).currentAmmo.hiddenValue = iVar29;
          (this->fields).currentAmmo.fakeValue = iVar31;
          (this->fields).currentAmmo.inited = bVar18;
          *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar32;
          if (isLocal != 0) {
            pMVar23 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar23 == (MVNetworkGame *)0x0) ||
                (pWVar33 = (pMVar23->fields).worldNetwork, pWVar33 == (WorldNetwork *)0x0)) ||
               (this_01 = (RuntimeEventManager *)(pWVar33->fields)._.runtimeEventManagerNetwork,
               this_01 == (RuntimeEventManager *)0x0)) goto code_?;
            voxelHit.point.y = fStack_19;
            voxelHit.point.x = fVar17;
            voxelHit.point.z = fStack_34;
            voxelHit.normal.x = fStack_35;
            voxelHit.normal.y = fStack_36;
            voxelHit.normal.z = (float)IStack_37._0_4_;
            voxelHit.cubePos._0_4_ = stack0xffffff88;
            voxelHit._28_4_ = iStack_38;
            voxelHit.face = (int32_t)this_01;
            voxelHit._36_4_ = layerMask;
            voxelHit.woId = (int32_t)fVar17;
            voxelHit.cube = (Cube *)fStack_19;
            voxelHit.distance = fStack_34;
            voxelHit.collider = (Collider *)fStack_35;
            voxelHit.transform = (Transform *)fStack_36;
            voxelHit._60_4_ = IStack_37._0_4_;
            voxelHit.interactionFlags._0_2_ = (int16_t)stack0xffffff88;
            voxelHit.interactionFlags._2_2_ = SUB42(stack0xffffff88,2);
            voxelHit.interactionFlags._4_4_ = 0x7f800000;
            fVar10 = fStack_19;
            RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                      (this_01,voxelHit,0.0,(MethodInfo *)uVar4);
          }
        }
        if ((((fVar10 == 0.0) && (this_05 != (MVCubeModelBase *)0x0)) &&
            ((TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment <=
             (this_05->klass->_1).naturalAligment)) &&
           ((MVCubeModelFineGrainedTerrain__Class *)
            (this_05->klass->_1).typeHierarchy
            [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] ==
            TypeInfo__MVCubeModelFineGrainedTerrain)) {
          auStack_7._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
          auStack_7._4_4_ = (this->fields).currentAmmo.hiddenValue;
          iStack_26 = (this->fields).currentAmmo.fakeValue;
          bStack_27 = (this->fields).currentAmmo.inited;
          uStack_28 = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value_00.hiddenValue = auStack_7._4_4_;
          value_00.currentCryptoKey = auStack_7._0_4_;
          value_00.fakeValue = iStack_26;
          value_00.inited = bStack_27;
          value_00._13_3_ = uStack_28;
          iVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
          pOVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit
                              ((ObscuredInt *)auStack_7,iVar29 + 1,(MethodInfo *)0x0);
          iVar29 = pOVar30->hiddenValue;
          iVar31 = pOVar30->fakeValue;
          bVar18 = pOVar30->inited;
          uVar32 = *(undefined3 *)&pOVar30->field_0xd;
          (this->fields).currentAmmo.currentCryptoKey = pOVar30->currentCryptoKey;
          (this->fields).currentAmmo.hiddenValue = iVar29;
          (this->fields).currentAmmo.fakeValue = iVar31;
          (this->fields).currentAmmo.inited = bVar18;
          *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar32;
          if (isLocal != 0) {
            if (((this_05->klass->_1).naturalAligment <
                 (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment) ||
               ((MVCubeModelFineGrainedTerrain__Class *)
                (this_05->klass->_1).typeHierarchy
                [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
                TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
            pos.z = (int16_t)stack0xffffff88;
            pos._0_4_ = IStack_37._0_4_;
            MVCubeModelBase::MVCubeModelBase_RemoveCube(this_05,pos,(MethodInfo *)0x0);
            MVCubeModelBase::MVCubeModelBase_HandleDelta(this_05,(MethodInfo *)0x0);
          }
          iStack_26 = 0;
          auStack_7._4_4_ = &UNK_?;
          iVar39 = func_?();
          if (iVar39 == 0) goto code_?;
          position.z = fStack_19;
          position.x = (float)(MethodInfo *)uVar4;
          position.y = fStack_5;
          SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                    (*(ParticleSystem **)(iVar39 + 0x220),position,1.0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnHolstered
               (PickupItemCubeGun *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).TriggerEnd.method)
            (this,(this->klass->vtable).OnStateChanged.methodPtr);
  pGVar1 = (this->fields).primaryCursor;
  (this->fields).showingCursors = 0;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeOverride
                  (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
        pGVar1 = (this->fields).secondaryCursor;
        if (pGVar1 != (GUICellCursor *)0x0) {
          GUICellCursor::GUICellCursor_set_FadeOverride
                    (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnLeaveVehicleWithWeapon
               (PickupItemCubeGun *this,MethodInfo *method)

{
  pGVar1 = (this->fields).primaryCursor;
  (this->fields).showingCursors = 0;
  (this->fields).hasLeftVehicle = 1;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeOverride
                  (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
        pGVar1 = (this->fields).secondaryCursor;
        if (pGVar1 != (GUICellCursor *)0x0) {
          GUICellCursor::GUICellCursor_set_FadeOverride
                    (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnStateChanged
               (PickupItemCubeGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_material);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
code_?:
      (this->fields).material = 0x18;
      pCVar2 = (this->fields).cubeBullet;
joined_?:
      if (pCVar2 != (CubeBullet *)0x0) {
        this_00 = *(MeshFilter **)(in_stack_3 + 0x10);
        *(undefined1 *)(in_stack_3 + 0x18) = in_stack_4;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((((pMVar5 != (MVNetworkGame *)0x0) &&
             (this_01 = (pMVar5->fields)._MaterialRepository_k__BackingField,
             this_01 != (MVMaterialRepository *)0x0)) &&
            (pMVar6 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                (this_01,*(uint8_t *)(in_stack_3 + 0x18),(MethodInfo *)0x0),
            pMVar6 != (MVMaterial *)0x0)) && (this_00 != (MeshFilter *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    (this_00,(pMVar6->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
          this_02 = *(Renderer **)(in_stack_3 + 0x14);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar7 != (MaterialLoader *)0x0) && (this_02 != (Renderer *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      (this_02,(pMVar7->fields)._CubeModelMaterial_k__BackingField,(MethodInfo *)0x0
                      );
            return;
          }
        }
        func_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto code_?;
    }
    this = (PickupItemCubeGun *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                      (Object *)StringLiteral_itemData,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if (this == (PickupItemCubeGun *)0x0) goto code_?;
    if ((*(byte *)(*(int *)this + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                       (Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) goto code_?;
    TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                       (Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar9.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar10 = (undefined1 *)func_?();
      *(undefined1 *)((int)this + 0x100) = *puVar10;
      pCVar2 = *(CubeBullet **)((int)this + 0xf8);
      goto joined_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnUnequip
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields).showingCursors == 0) {
    return;
  }
  pGVar1 = (this->fields).primaryCursor;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_Destroy(pGVar1,(MethodInfo *)0x0);
        if ((this->fields).secondaryCursor != (GUICellCursor *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (in_stack_2,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUnholstered() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnUnholstered
               (PickupItemCubeGun *this,MethodInfo *method)

{
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_ResetAmmo
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).get_MaxAmmo.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_3,iVar1,(MethodInfo *)0x0);
  iVar1 = pOVar2->hiddenValue;
  iVar4 = pOVar2->fakeValue;
  bVar5 = pOVar2->inited;
  uVar6 = *(undefined3 *)&pOVar2->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar2->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = iVar4;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* Void SetCubeBulletMaterial(Byte) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_SetCubeBulletMaterial
               (PickupItemCubeGun *this,uint8_t materialId,MethodInfo *method)

{
  (this->fields).material = materialId;
  pCVar1 = (this->fields).cubeBullet;
  if (pCVar1 != (CubeBullet *)0x0) {
    this_00 = (pCVar1->fields).meshFilter;
    (pCVar1->fields)._MaterialID_k__BackingField = materialId;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((pMVar2 != (MVNetworkGame *)0x0) &&
         (this_01 = (pMVar2->fields)._MaterialRepository_k__BackingField,
         this_01 != (MVMaterialRepository *)0x0)) &&
        (pMVar3 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                            (this_01,(pCVar1->fields)._MaterialID_k__BackingField,(MethodInfo *)0x0)
        , pMVar3 != (MVMaterial *)0x0)) && (this_00 != (MeshFilter *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                (this_00,(pMVar3->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
      this_02 = (pCVar1->fields).meshRenderer;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar4 != (MaterialLoader *)0x0) && (this_02 != (MeshRenderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)this_02,(pMVar4->fields)._CubeModelMaterial_k__BackingField,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean ShowCursors() */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_ShowCursors
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__MVVehicleBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if ((bVar2 == 0) && ((this->fields)._._._IsHolstered_k__BackingField == 0)) {
    pMVar1 = (this->fields)._._.owner;
    if (pMVar1 == (MVPickupOwner *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      bVar2 = (*pcVar3)();
      return bVar2;
    }
    if (((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
       (pMVar4 = (pMVar1->fields)._.worldObjectParent, pMVar4 != (MVWorldObjectClient *)0x0)) {
      pMVar5 = pMVar4->klass;
      if (((pMVar5->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) ||
         ((MVAvatarLocal__Class *)
          (pMVar5->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarLocal)) {
        pMVar5 = ((((this->fields)._._.owner)->fields)._.worldObjectParent)->klass;
        if ((pMVar5->_1).naturalAligment < (TypeInfo__MVVehicleBase->_1).naturalAligment) {
          return 0;
        }
        if ((MVVehicleBase__Class *)
            (pMVar5->_1).typeHierarchy[(TypeInfo__MVVehicleBase->_1).naturalAligment - 1] !=
            TypeInfo__MVVehicleBase) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


/* Void Start() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Start
               (PickupItemCubeGun *this,MethodInfo *method)

{
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields).primaryCursor;
  if (pGVar2 != (GUICellCursor *)0x0) {
    (pGVar2->fields).fadeInTime = 0.2;
    pGVar2 = (this->fields).secondaryCursor;
    if (pGVar2 != (GUICellCursor *)0x0) {
      (pGVar2->fields).fadeInTime = 0.2;
      pGVar2 = (this->fields).primaryCursor;
      if (pGVar2 != (GUICellCursor *)0x0) {
        (pGVar2->fields).fadeOutTime = 0.2;
        pGVar2 = (this->fields).secondaryCursor;
        if (pGVar2 != (GUICellCursor *)0x0) {
          (pGVar2->fields).fadeOutTime = 0.2;
          pGVar2 = (this->fields).secondaryCursor;
          if (pGVar2 != (GUICellCursor *)0x0) {
            GUICellCursor::GUICellCursor_set_FadeOverride
                      (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartFire() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_StartFire
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  (this->fields)._.isFiring = 1;
  (this->fields).fireMain = 1;
  (this->fields).fireSecondary = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).prevFireTime;
  iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
  AVar4 = (this->fields)._.fireInterval.hiddenValue;
  pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
  fVar6 = (this->fields)._.fireInterval.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar4;
  value.currentCryptoKey = iVar3;
  value.hiddenValueOld = pBVar5;
  value.fakeValue = fVar6;
  value.inited = (this->fields)._.fireInterval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
  fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if (fVar6 < fVar1 - fVar2) {
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
    AVar4 = (this->fields)._.fireInterval.hiddenValue;
    pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
    fVar2 = (this->fields)._.fireInterval.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = AVar4;
    value_00.currentCryptoKey = iVar3;
    value_00.hiddenValueOld = pBVar5;
    value_00.fakeValue = fVar2;
    value_00.inited = (this->fields)._.fireInterval.inited;
    value_00._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
    fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    (this->fields).prevFireTime = fVar6 - fVar2;
  }
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_TriggerBegin
               (PickupItemCubeGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (((this->fields)._.isFiring == 0) && ((this->fields).waitingToFire == 0)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      cRam_? = '\x01';
    }
    (this->fields)._.isFiring = 1;
    (this->fields).fireMain = 1;
    (this->fields).fireSecondary = 0;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).prevFireTime;
    iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
    AVar4 = (this->fields)._.fireInterval.hiddenValue;
    pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
    fVar6 = (this->fields)._.fireInterval.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar4;
    value.currentCryptoKey = iVar3;
    value.hiddenValueOld = pBVar5;
    value.fakeValue = fVar6;
    value.inited = (this->fields)._.fireInterval.inited;
    value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
    fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (fVar6 < fVar1 - fVar2) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
      AVar4 = (this->fields)._.fireInterval.hiddenValue;
      pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
      fVar2 = (this->fields)._.fireInterval.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_00.hiddenValue = AVar4;
      value_00.currentCryptoKey = iVar3;
      value_00.hiddenValueOld = pBVar5;
      value_00.fakeValue = fVar2;
      value_00.inited = (this->fields)._.fireInterval.inited;
      value_00._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
      fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
      (this->fields).prevFireTime = fVar6 - fVar2;
    }
  }
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_TriggerEnd
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).prevFireTime;
  iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
  AVar4 = (this->fields)._.fireInterval.hiddenValue;
  pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
  fVar6 = (this->fields)._.fireInterval.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = fVar1 - fVar2;
  value.hiddenValue = AVar4;
  value.currentCryptoKey = iVar3;
  value.hiddenValueOld = pBVar5;
  value.fakeValue = fVar6;
  value.inited = (this->fields)._.fireInterval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
  fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if (fVar2 < fVar1) {
    if ((this->fields).fireMain != 0) {
      pMVar7 = (this->fields)._._.owner;
      if (pMVar7 == (MVPickupOwner *)0x0) goto code_?;
      (*(code *)(this->klass->vtable).OnFire.method)
                (this,(pMVar7->fields)._IsLocal_k__BackingField,
                 (this->klass->vtable).OnDestroy.methodPtr);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).prevFireTime = fVar2;
    }
    if ((this->fields).fireSecondary != 0) {
      pMVar7 = (this->fields)._._.owner;
      if (pMVar7 != (MVPickupOwner *)0x0) {
        PickupItemCubeGun_OnFireSecondary
                  (this,(pMVar7->fields)._IsLocal_k__BackingField,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this->fields).chargeObject;
        (this->fields).prevFireTime = fVar2;
        if (this_00 != (Transform *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
code_?:
  (this->fields).fireMain = 0;
  (this->fields).fireSecondary = 0;
  (this->fields).waitingToFire = 0;
  (this->fields)._.isFiring = 0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Update
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields).showingCursors != 0) {
    PickupItemCubeGun_HandleCursors(this,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).CanFire.methodPtr);
  if (cVar1 != '\0') {
    pCVar2 = (this->fields).cubeBullet;
    if ((pCVar2 == (CubeBullet *)0x0) ||
       (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 == (MeshRenderer *)0x0))
    goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)pMVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pCVar2 = (this->fields).cubeBullet;
      if ((pCVar2 != (CubeBullet *)0x0) &&
         (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 != (MeshRenderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pMVar3,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)();
  if (cVar1 != '\0') {
    return;
  }
  pCVar2 = (this->fields).cubeBullet;
  if ((pCVar2 != (CubeBullet *)0x0) &&
     (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 != (MeshRenderer *)0x0)) {
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)pMVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    pCVar2 = (this->fields).cubeBullet;
    if ((pCVar2 != (CubeBullet *)0x0) &&
       (pMVar3 = (pCVar2->fields).meshRenderer, pMVar3 != (MeshRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)pMVar3,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_UpdateControllerUpdate
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields)._.isFiring != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      cRam_? = '\x01';
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    bVar2 = (this->fields).fireSecondary;
    fVar1 = fVar1 - (this->fields).prevFireTime;
    uVar3 = (this->fields).fireIntervalSecondary.currentCryptoKey;
    uVar4 = (this->fields).fireIntervalSecondary.hiddenValue.b1;
    uVar5 = (this->fields).fireIntervalSecondary.hiddenValue.b2;
    uVar6 = (this->fields).fireIntervalSecondary.hiddenValue.b3;
    uVar7 = (this->fields).fireIntervalSecondary.hiddenValue.b4;
    value.hiddenValue.b4 = uVar7;
    value.hiddenValue.b3 = uVar6;
    value.hiddenValue.b2 = uVar5;
    value.hiddenValue.b1 = uVar4;
    value.currentCryptoKey = uVar3;
    pBVar8 = (this->fields).fireIntervalSecondary.hiddenValueOld;
    fVar9 = (this->fields).fireIntervalSecondary.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValueOld = pBVar8;
    value.fakeValue = fVar9;
    value.inited = (this->fields).fireIntervalSecondary.inited;
    value._17_3_ = *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x11;
    fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    (this->fields).fireSecondary = fVar9 < fVar1;
    (this->fields).fireMain = fVar1 <= fVar9;
    if ((fVar9 < fVar1) && (bVar2 == 0)) {
      this_00 = (this->fields).chargeObject;
      if ((this_00 != (Transform *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  return;
}


/* PickupItemCubeGun() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun__ctor
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  (this->fields).minDistanceToCubeFire = 0.8;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,10,(MethodInfo *)0x0);
  iVar2 = pOVar1->currentCryptoKey;
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).speed = 30.0;
  (this->fields).range = 200.0;
  (this->fields).maxAmmo.currentCryptoKey = iVar2;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.5,(MethodInfo *)0x0);
  AVar8 = pOVar7->hiddenValue;
  pBVar9 = pOVar7->hiddenValueOld;
  fVar10 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0x11;
  (this->fields).fireIntervalSecondary.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).fireIntervalSecondary.hiddenValue = AVar8;
  (this->fields).fireIntervalSecondary.hiddenValueOld = pBVar9;
  (this->fields).fireIntervalSecondary.fakeValue = fVar10;
  (this->fields).fireIntervalSecondary.inited = bVar5;
  *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x11 = uVar6;
  func_?();
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0,(MethodInfo *)0x0);
  iVar2 = pOVar1->hiddenValue;
  iVar3 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar3;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_IsAmmoDepleted
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar3;
  value._12_4_ = uVar4;
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if (0 < iVar3) {
    return 0;
  }
  cVar5 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                    (this,(this->klass->vtable).get_HasPercentageAmmo.methodPtr);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_MaxAmmo
                  (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).maxAmmo.currentCryptoKey;
  iVar2 = (this->fields).maxAmmo.hiddenValue;
  iVar3 = (this->fields).maxAmmo.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = iVar2;
  value.currentCryptoKey = iVar1;
  value.fakeValue = iVar3;
  value.inited = (this->fields).maxAmmo.inited;
  value._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar4 = (*(code *)(this->klass->vtable).CalculateMaxAmmo.method)
                    (this,iVar1,(this->klass->vtable).UpdateWithDirection.methodPtr);
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1((this->fields).currentAmmo,(MethodInfo *)0x0);
  if (iVar1 < iVar4) {
    iVar1 = iVar4;
  }
  return iVar1;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_Quantity
                  (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

