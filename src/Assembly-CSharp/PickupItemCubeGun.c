
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
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    fStack_7 = pVVar4->z;
    puVar8 = (undefined8 *)func_?(&VStack_5,&uStack_6,0);
    fVar9 = *(float *)(puVar8 + 1);
    uStack_10 = (undefined4)*puVar8;
    uStack_11 = (undefined4)((ulonglong)*puVar8 >> 0x20);
    iVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Default,(MethodInfo *)0x0);
    p_Var10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_AsRef_1((Void *)(1 << ((byte)iVar12 & 0x1f)),(MethodInfo *)0x0);
    distance = (this->fields).range;
    this_00 = (HashSet_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields)._._.owner;
    if (((pMVar1 != (MVPickupOwner *)0x0) &&
        (pMVar13 = (pMVar1->fields)._.worldObjectParent, pMVar13 != (MVWorldObjectClient *)0x0)) &&
       (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_00,(pMVar13->fields)._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      p_Var10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_1((Void *)p_Var10,(MethodInfo *)0x0);
      ray.m_Origin.y = 0.0;
      ray.m_Origin.x = (float)p_Var10;
      ray.m_Origin.z = fVar3;
      ray.m_Direction.x = (float)uStack_10;
      ray.m_Direction.y = (float)uStack_11;
      ray.m_Direction.z = fVar9;
      bVar14 = CollisionDetection::CollisionDetection_MVHit_1
                        (ray,hit,distance,this_00,(int32_t)p_Var10,(MethodInfo *)0x0);
      return bVar14;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
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
  uVar1 = (undefined2)*unaff_FS_OFFSET;
  uVar2 = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
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
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this,voxelHit.woId,(MethodInfo *)0x0);
    if (((pMVar3 == (MVWorldObject *)0x0) ||
        ((pMVar3->klass->_1).naturalAligment <
         (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment)) ||
       ((MVCubeModelFineGrainedTerrain__Class *)
        (pMVar3->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) {
code_?:
      *unaff_FS_OFFSET = CONCAT22(uVar2,uVar1);
      return 0;
    }
    pLVar4 = pMVar3[1].fields.inputLinkRefs;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pMVar5 = (MVWorldObject__Class *)0x0;
    IVar6 = voxelHit.cubePos;
    EVar7 = Cube::Cube_GetEdge_1
                      ((GameObject *)pLVar4,voxelHit.cube,voxelHit.face,voxelHit.point,IVar6,
                       (MethodInfo *)0x0);
    pVVar8 = Cube::Cube_GetEdgeVerticesWorld
                        ((GameObject *)pMVar3[1].fields.inputLinkRefs,voxelHit.cube,voxelHit.face,
                         EVar7,IVar6,(MethodInfo *)0x0);
    uVar9 = 0;
    if (pVVar8 != (Vector3__Array *)0x0) {
      if ((pVVar8->max_length == 0) || (pVVar8->max_length < 2)) {
        func_?();
code_?:
        func_?();
      }
      else {
        uVar10 = voxelHit.point.z._0_2_;
        uVar11 = voxelHit.point.z._2_2_;
        bVar12 = MathFunctions::MathFunctions_DistancePointLine
                          (voxelHit.point,pVVar8->vector[0],pVVar8->vector[1],
                           (float *)&stack0xffffffdc,(MethodInfo *)0x0);
        pIVar13 = TypeRef__MV__WorldObject__Face;
        if ((bVar12 == 0) ||
           (maxDistanceToEdge < (float)(uint)uVar9 || maxDistanceToEdge == (float)(uint)uVar9))
        goto code_?;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar13,(MethodInfo *)0x0);
        if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar14 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
        if (pAVar14 != (Array *)0x0) {
          pAVar15 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)
                    mscorlib.dll::System::Array::Array_GetEnumerator(pAVar14,(MethodInfo *)0x0);
          piVar16 = (int *)&stack0xffffffd8;
          fVar17 = 0.0;
          while (pAVar15 != (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0)
          {
            uVar1 = 0xf9;
            uVar2 = 0x1055;
            cVar18 = func_?();
            if (cVar18 == '\0') {
              iVar19 = func_?();
              *piVar16 = iVar19;
              if (iVar19 != 0) {
                uVar1 = 0x4b2;
                uVar2 = 0x1055;
                func_?();
              }
              if (fVar17 != 0.0) goto code_?;
              goto code_?;
            }
            if ((pAVar15 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0)
               || (piVar20 = (int *)func_?(), piVar20 == (int *)0x0)) break;
            if (*(Il2CppClass **)(*piVar20 + 0x20) !=
                (TypeInfo__MV__WorldObject__Face->_0).element_class) goto code_?;
            puVar21 = (uint *)func_?();
            pIVar13 = TypeRef__Edge;
            uVar22 = (ulonglong)*puVar21;
            if (*puVar21 != voxelHit.face) {
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pAVar15 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)pIVar13;
              enumType_00 = (MVWorldObject *)
                            mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                      ((RuntimeTypeHandle)pIVar13,(MethodInfo *)0x0);
              if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pAVar14 = mscorlib.dll::System::Enum::Enum_GetValues
                                  ((Type *)enumType_00,(MethodInfo *)0x0);
              if (pAVar14 == (Array *)0x0) break;
              pIVar23 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar14,(MethodInfo *)0x0);
              while( true ) {
                if (pIVar23 == (IEnumerator *)0x0) goto code_?;
                cVar18 = func_?();
                if (cVar18 == '\0') break;
                if (pIVar23 == (IEnumerator *)0x0) goto code_?;
                uVar24 = 0;
                piVar20 = (int *)func_?();
                if (piVar20 == (int *)0x0) goto code_?;
                if (*(Il2CppClass **)(*piVar20 + 0x20) != (TypeInfo__Edge->_0).element_class)
                goto code_?;
                pEVar25 = (Edge__Enum *)func_?();
                face = (Face__Enum)uVar22;
                EVar7 = *pEVar25;
                if (EVar7 != Edge__Enum_None) {
                  pLVar4 = pMVar3[1].fields.inputLinkRefs;
                  pMVar3 = enumType_00;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                    pMVar3 = enumType_00;
                  }
                  pAVar15 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0;
                  uVar22 = CONCAT44(face,voxelHit.cube);
                  pVVar8 = Cube::Cube_GetEdgeVerticesWorld
                                      ((GameObject *)pLVar4,voxelHit.cube,face,EVar7,IVar6,
                                       (MethodInfo *)0x0);
                  pDVar26 = (Dictionary_2_System_Object_System_Object_ *)0x0;
                  uVar22 = uVar22 & 0xffffffff;
                  iVar19 = 0;
                  if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
                  while( true ) {
                    uVar1 = (undefined2)((uint)uVar24 >> 0x10);
                    method_00 = (MethodInfo *)uVar22;
                    if ((int)pVVar8->max_length <= iVar19) break;
                    func_?();
                    uVar24 = 0;
                    func_?();
                    pDVar27 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                    fVar28 = (float10)func_?();
                    pMVar3 = (MVWorldObject *)&stack0xffffff78;
                    pDVar29 = (Dictionary_2_System_Object_System_Object_ *)
                              ((int)&pDVar26->klass + 1);
                    if (_UNK_? <= (float)fVar28) {
                      pDVar29 = pDVar27;
                    }
                    func_?();
                    pAVar15 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)
                              CONCAT22(uVar11,uVar10);
                    pIVar23 = (IEnumerator *)0x0;
                    pMVar30 = pMVar5;
                    fVar28 = (float10)func_?();
                    iVar19 = iVar19 + 1;
                    pDVar26 = (Dictionary_2_System_Object_System_Object_ *)
                              ((int)&pDVar29->klass + 1);
                    if (_UNK_? <= (float)fVar28) {
                      pDVar26 = pDVar29;
                    }
                    uVar22 = CONCAT44(pDVar26,pMVar30);
                  }
                  enumType_00 = pMVar3;
                  if (pDVar26 == (Dictionary_2_System_Object_System_Object_ *)0x2) {
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    iVar31 = voxelHit.cubePos.x;
                    iVar32 = voxelHit.cubePos.y;
                    IVar6.z = iVar31;
                    IVar6._0_4_ = &stack0xffffffb4;
                    IVar6 = Cube::Cube_GetCubePosAboveFace
                                       (IVar6,CONCAT22(uVar1,voxelHit.cubePos.z),method_00);
                    pIVar33 = IVar6._0_4_;
                    iVar34 = pIVar33->y;
                    iVar35 = pIVar33->z;
                    IVar6 = *pIVar33;
                    pos->x = pIVar33->x;
                    pos->y = iVar34;
                    pos->z = iVar35;
                    iVar19 = func_?();
                    if ((iVar19 != 0) &&
                       (this_00 = (MVCubeModelBase *)func_?(),
                       this_00 != (MVCubeModelBase *)0x0)) {
                      a = MVCubeModelBase::MVCubeModelBase_GetCube(this_00,IVar6,(MethodInfo *)0x0)
                      ;
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      bVar12 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                        ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
                      func_?();
                      func_?();
                      *unaff_FS_OFFSET = CONCAT22(iVar32,iVar31);
                      return bVar12 != 0;
                    }
                    goto code_?;
                  }
                }
              }
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  bVar12 = (*pcVar36)();
  return bVar12;
}


/* Void HandleCursors() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_HandleCursors
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x9538);
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
      voxelHit.woId._2_2_ = in_stack_3;
      voxelHit.woId._0_1_ = (bool)in_stack_4;
      voxelHit.woId._1_1_ = SUB21(in_stack_4,1);
      voxelHit.point.y = in_stack_5;
      voxelHit.point.x = (float)&stack0xffffffec;
      voxelHit.point.z = in_stack_6;
      voxelHit.normal.x = in_stack_7;
      voxelHit.normal.y._0_2_ = in_stack_8;
      voxelHit.normal.y._2_2_ = in_stack_9;
      voxelHit.normal.z = in_stack_10;
      voxelHit.cubePos.x = in_stack_11;
      voxelHit.cubePos.y = in_stack_12;
      voxelHit.cubePos.z = (int16_t)in_stack_13;
      voxelHit._30_2_ = SUB42(in_stack_13,2);
      voxelHit.face = in_stack_14;
      voxelHit._36_4_ = in_stack_15;
      voxelHit.cube = (Cube *)in_stack_16;
      voxelHit.distance = (float)in_stack_17;
      voxelHit.collider._0_2_ = SUB42(fStack_18,0);
      voxelHit.collider._2_2_ = (short)((uint)fStack_18 >> 0x10);
      voxelHit.transform = (Transform *)pCStack_19;
      voxelHit._60_4_ = in_stack_20;
      voxelHit.interactionFlags._0_4_ = in_stack_21;
      voxelHit.interactionFlags._4_4_ = in_stack_22;
      IVar23 = PickupItemCubeGun_GetCubePos(voxelHit,pMStack_24);
      pIVar25 = IVar23._0_4_;
      uVar26 = pIVar25->y;
      method_00 = (MethodInfo *)((uint)(ushort)pIVar25->z << 0x10);
      iVar27 = pIVar25->z;
      bVar1 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,*pIVar25,method_00);
      iVar28 = (int16_t)((uint)method_00 >> 0x10);
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
      IVar23 = (pGVar2->fields).pos;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      position.y = uVar26;
      position.x = iVar27;
      a.z = iVar28;
      a.x = iVar27;
      a.y = uVar26;
      bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                        (a,IVar23,(MethodInfo *)0x0);
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
      pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
          (pOVar30 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (pMVar29,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              ), pOVar30 == (Object *)0x0)) || (pGVar2 == (GUICellCursor *)0x0))
      goto code_?;
      position.z = iVar28;
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar2,position,(GameObject *)pOVar30[0x11].klass,(MethodInfo *)0x0);
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
      iVar27 = (int16_t)in_stack_14;
      pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar29 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar31 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar29,in_stack_16,(MethodInfo *)0x0);
      if (((pMVar31 == (MVWorldObject *)0x0) ||
          ((pMVar31->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment)) ||
         ((MVCubeModelFineGrainedTerrain__Class *)
          (pMVar31->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
          TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      uVar32._0_2_ = (pGVar2->fields).pos.x;
      uVar32._2_2_ = (pGVar2->fields).pos.y;
      iVar28 = (pGVar2->fields).pos.z;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar33._0_2_ = 0;
      uVar33._2_2_ = 0;
      IVar23.z = iVar27;
      IVar23.x = (int16_t)in_stack_13;
      IVar23.y = SUB42(in_stack_13,2);
      b.z = iVar28;
      b.x = (short)uVar32;
      b.y = (short)((uint)uVar32 >> 0x10);
      bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                        (IVar23,b,(MethodInfo *)0x0);
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
      position_00.z = (int16_t)pGVar2;
      position_00.x = (int16_t)uVar33;
      position_00.y = SUB42(uVar33,2);
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar2,position_00,(GameObject *)pMVar31[1].fields.inputLinkRefs,(MethodInfo *)0x0);
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
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x48);
  if ((((this->fields).hasLeftVehicle == 0) && ((this->fields).fireSecondary == 0)) &&
     (cVar2 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                        (this,(this->klass->vtable).get_Quantity.methodPtr), cVar2 == '\0')) {
    bVar3 = PickupItemCubeGun_DoLineOfFireCheck(this,(VoxelHit *)&fStack_1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      voxelHit.point.y = fStack_1;
      voxelHit.point.x = (float)&stack0xfffffff4;
      voxelHit.point.z = fStack_4;
      voxelHit.normal.x = fStack_5;
      voxelHit.normal.y = fStack_6;
      voxelHit.normal.z = fStack_7;
      voxelHit.cubePos._0_4_ = fStack_8;
      voxelHit.cubePos.z = IStack_9.x;
      voxelHit._30_2_ = IStack_9.y;
      voxelHit.face = stack0xffffff94;
      voxelHit._36_4_ = iStack_10;
      voxelHit.woId = uStack_11;
      voxelHit.cube = (Cube *)iStack_12;
      voxelHit.distance = (float)pCStack_13;
      voxelHit.collider = (Collider *)in_stack_14;
      voxelHit.transform = (Transform *)in_stack_15;
      voxelHit._60_4_ = in_stack_16;
      voxelHit.interactionFlags._0_4_ = in_stack_17;
      voxelHit.interactionFlags._4_4_ = in_stack_18;
      IVar19 = PickupItemCubeGun_GetCubePos
                         (voxelHit,(MethodInfo *)
                                   (CONCAT26(in_stack_20,
                                             CONCAT24(in_stack_21,in_stack_18)) >> 0x20)
                         );
      bVar3 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,*IVar19._0_4_,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
    }
    this_00 = (this->fields)._._.muzzlePoint;
    pMVar22 = (this->fields)._._.owner;
    if (this_00 != (Transform *)0x0) {
      pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&puStack_24,this_00,(MethodInfo *)0x0);
      pCVar25 = CubeGunBulletObject::CubeGunBulletObject_Create
                          (pMVar22,*pVVar23,(this->fields).material,(MethodInfo *)0x0);
      pMVar22 = (this->fields)._._.owner;
      if (pMVar22 != (MVPickupOwner *)0x0) {
        method_00 = (pMVar22->fields).lookOrigin.x;
        uVar26 = (pMVar22->fields).lookOrigin.y;
        fVar27 = (pMVar22->fields).lookOrigin.z;
        MVPickupOwner::MVPickupOwner_get_LookDirection
                  ((Vector3 *)&stack0xffffffc4,(this->fields)._._.owner,(MethodInfo *)method_00);
        puVar28 = (undefined8 *)func_?();
        fVar29 = *(float *)(puVar28 + 1);
        uVar30 = (undefined4)*puVar28;
        uStack_31 = (undefined4)((ulonglong)*puVar28 >> 0x20);
        if (pCVar25 != (CubeGunBulletObject *)0x0) {
          pMVar22 = (this->fields)._._.owner;
          this_01 = (pCVar25->fields).bullet;
          if (pMVar22 != (MVPickupOwner *)0x0) {
            speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar22,(this->fields).speed,(MethodInfo *)0x0);
            fVar32 = (this->fields).range;
            pMVar22 = (this->fields)._._.owner;
            if (pMVar22 != (MVPickupOwner *)0x0) {
              pMVar33 = pMVar22->klass;
              pIVar34 = pMVar33[1]._0.image;
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar33->vtable).get_IgnoreWOIDs.method)();
              if (this_01 != (Bullet *)0x0) {
                lineOfFire.m_Origin.y = (float)uVar26;
                lineOfFire.m_Origin.x = (float)pIVar34;
                lineOfFire.m_Origin.z._0_2_ = SUB42(fVar27,0);
                lineOfFire.m_Origin.z._2_2_ = (short)((uint)fVar27 >> 0x10);
                lineOfFire.m_Direction.x = (float)uVar30;
                lineOfFire.m_Direction.y = (float)uStack_31;
                lineOfFire.m_Direction.z = fVar29;
                Bullet::Bullet_Fire(this_01,speed,fVar32,lineOfFire,ignoreWoIDs,(MethodInfo *)0x0);
                iVar35 = (this->fields).currentAmmo.currentCryptoKey;
                fVar27 = (float)(this->fields).currentAmmo.hiddenValue;
                fVar29 = (float)(this->fields).currentAmmo.fakeValue;
                fVar32 = *(float *)&(this->fields).currentAmmo.inited;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                value.hiddenValue = (int32_t)fVar27;
                value.currentCryptoKey = iVar35;
                value.fakeValue = (int32_t)fVar29;
                value._12_4_ = fVar32;
                iVar35 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                pOVar36 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Implicit
                                    ((ObscuredInt *)&stack0xffffffc0,iVar35 + -1,(MethodInfo *)0x0);
                iVar35 = pOVar36->hiddenValue;
                iVar37 = pOVar36->fakeValue;
                bVar3 = pOVar36->inited;
                uVar38 = *(undefined3 *)&pOVar36->field_0xd;
                (this->fields).currentAmmo.currentCryptoKey = pOVar36->currentCryptoKey;
                (this->fields).currentAmmo.hiddenValue = iVar35;
                (this->fields).currentAmmo.fakeValue = iVar37;
                (this->fields).currentAmmo.inited = bVar3;
                *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar38;
                return;
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar39 = (code *)swi(3);
    (*pcVar39)();
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
  RStack_1.m_Direction.z = 0.0;
  RStack_1.m_Direction.x = 0.0;
  RStack_1.m_Direction.y = 0.0;
  func_?(&stack0xffffff60,0,0x48);
  this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  pTVar2 = (this->fields)._._.muzzlePoint;
  audioSource = (this->fields).audioSource;
  if ((pTVar2 == (Transform *)0x0) ||
     (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_4,pTVar2,(MethodInfo *)0x0), this_02 == (AudioManager *)0x0)) {
code_?:
    func_?();
  }
  else {
    fVar5 = 0.0;
    AudioManager::AudioManager_Play_2
              (this_02,StringLiteral_CubeGun,audioSource,*pVVar3,(MethodInfo *)0x0);
    pMVar6 = (this->fields)._._.owner;
    if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
    auStack_7._0_4_ = (pMVar6->fields).lookOrigin.x;
    auStack_7._4_4_ = (pMVar6->fields).lookOrigin.y;
    fVar8 = (pMVar6->fields).lookOrigin.z;
    pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_9,(this->fields)._._.owner,(MethodInfo *)0x0);
    uVar10 = pVVar3->x;
    uVar11 = pVVar3->y;
    VStack_4.z = pVVar3->z;
    pVVar3 = &VStack_4;
    pVVar12 = &VStack_9;
    RStack_1.m_Origin.x = (float)auStack_7._0_4_;
    RStack_1.m_Origin.y = (float)auStack_7._4_4_;
    puVar13 = &UNK_?;
    RStack_1.m_Origin.z = fVar8;
    VStack_4.x = (float)uVar10;
    VStack_4.y = (float)uVar11;
    puVar14 = (undefined8 *)func_?();
    RStack_1.m_Direction.x = (float)*puVar14;
    RStack_1.m_Direction.y = (float)((ulonglong)*puVar14 >> 0x20);
    RStack_1.m_Direction.z = *(float *)(puVar14 + 1);
    uVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Player,(MethodInfo *)0x0);
    uVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Logic,(MethodInfo *)0x0);
    ray.m_Origin.z = RStack_1.m_Origin.z;
    ray.m_Origin.x = RStack_1.m_Origin.x;
    ray.m_Origin.y = RStack_1.m_Origin.y;
    ray.m_Direction.x = RStack_1.m_Direction.x;
    ray.m_Direction.y = RStack_1.m_Direction.y;
    ray.m_Direction.z = RStack_1.m_Direction.z;
    method_00 = (MethodInfo *)RStack_1.m_Direction.y;
    bVar17 = CollisionDetection::CollisionDetection_MVHit_1
                       (ray,(VoxelHit *)&stack0xffffff60,(this->fields).range,
                        (HashSet_1_System_Int32_ *)0x0,
                        ~(1 << (uVar15 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar16 & 0x1f)),
                        (MethodInfo *)0x0);
    if (bVar17 == 0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          (&VStack_9,&RStack_1,(this->fields).range,(MethodInfo *)0x0);
      fStack_18 = pVVar3->x;
      VStack_4.x = pVVar3->y;
      in_stack_19 = pVVar3->z;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
code_?:
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar20 = TypeInfo__PrefabPool->static_fields->instance;
      if (((pPVar20 != (PrefabPool *)0x0) &&
          (this_01 = (pPVar20->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) &&
         (this_05 = (RailRay *)
                    EnumPoolManager::EnumPoolManager_Instantiate
                              (this_01,PoolEnums__Enum_CubeGunRay,
                               RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_)
         , this_05 != (RailRay *)0x0)) {
        (this_05->fields).target.x = fStack_18;
        (this_05->fields).target.y = VStack_4.x;
        (this_05->fields).target.z = in_stack_19;
        this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_05,(MethodInfo *)0x0);
        pTVar2 = (this->fields)._._.muzzlePoint;
        if ((pTVar2 != (Transform *)0x0) &&
           (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_9,pTVar2,(MethodInfo *)0x0), this_06 != (Transform *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (this_06,*pVVar3,(MethodInfo *)0x0);
          RailRay::RailRay_Reset(this_05,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    VStack_4.x = fStack_21;
    fVar8 = in_stack_19;
    fStack_18 = fVar5;
    VStack_4.y = in_stack_19;
    VStack_4.z = in_stack_22;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    iVar23 = 0;
    uVar24._0_1_ = 0;
    uVar24._1_3_ = 0;
    puVar25 = &UNK_?;
    this_04 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,0,(MethodInfo *)0x0);
    if ((bool)uVar24 == 0) goto code_?;
    pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar26 == (MVNetworkGame *)0x0) ||
        (this_07 = (pMVar26->fields)._MaterialRepository_k__BackingField,
        in_stack_27 == (Cube *)0x0)) ||
       (pBVar28 = (in_stack_27->fields)._.faceMaterials, pBVar28 == (Byte__Array *)0x0))
    goto code_?;
    if (pBVar28->max_length != 0) {
      if (this_07 != (MVMaterialRepository *)0x0) {
        pTVar2 = (Transform *)0x0;
        auStack_7[4] = pBVar28->vector[0];
        pCVar29 = (Cube *)&UNK_?;
        pCVar30 = (Collider *)auStack_7._4_4_;
        pMVar31 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                            (this_07,pBVar28->vector[0],(MethodInfo *)0x0);
        if (pMVar31 != (MVMaterial *)0x0) {
          fVar5 = (pMVar31->fields)._PhysicalProperties_k__BackingField.toughness;
          if (fVar5 != 0.0) {
            auStack_7._8_4_ = (this->fields).currentAmmo.currentCryptoKey;
            VStack_9.x = (float)(this->fields).currentAmmo.hiddenValue;
            VStack_9.y = (float)(this->fields).currentAmmo.fakeValue;
            VStack_9.z = *(float *)&(this->fields).currentAmmo.inited;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              pOStack_32 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
              func_?();
            }
            value.hiddenValue = (int32_t)VStack_9.x;
            value.currentCryptoKey = auStack_7._8_4_;
            value.fakeValue = (int32_t)VStack_9.y;
            value._12_4_ = VStack_9.z;
            iVar33 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
            pOVar34 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Implicit
                                ((ObscuredInt *)(auStack_7 + 8),iVar33 + 1,(MethodInfo *)0x0);
            iVar33 = pOVar34->hiddenValue;
            iVar35 = pOVar34->fakeValue;
            bVar17 = pOVar34->inited;
            uVar36 = *(undefined3 *)&pOVar34->field_0xd;
            (this->fields).currentAmmo.currentCryptoKey = pOVar34->currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = iVar33;
            (this->fields).currentAmmo.fakeValue = iVar35;
            (this->fields).currentAmmo.inited = bVar17;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar36;
            if (isLocal != 0) {
              pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar26 == (MVNetworkGame *)0x0) ||
                  (pWVar37 = (pMVar26->fields).worldNetwork, pWVar37 == (WorldNetwork *)0x0)) ||
                 (this_00 = (RuntimeEventManager *)(pWVar37->fields)._.runtimeEventManagerNetwork,
                 this_00 == (RuntimeEventManager *)0x0)) goto code_?;
              voxelHit.point.y = fVar8;
              voxelHit.point.x = fStack_21;
              voxelHit.point.z = in_stack_22;
              voxelHit.normal.x = (float)puVar13;
              voxelHit.normal.y = (float)pVVar12;
              voxelHit.normal.z = (float)pVVar3;
              voxelHit.cubePos._0_4_ = puVar25;
              voxelHit._28_4_ = this_03;
              voxelHit.face = uVar24;
              voxelHit._36_4_ = iVar23;
              voxelHit.woId = (int32_t)pCVar29;
              voxelHit.cube = (Cube *)this_07;
              voxelHit.distance = (float)pCVar30;
              voxelHit.collider = (Collider *)pTVar2;
              voxelHit.transform = (Transform *)in_stack_38;
              voxelHit._60_4_ = puStack_39;
              voxelHit.interactionFlags._0_4_ = pOStack_32;
              voxelHit.interactionFlags._4_4_ = 0x7f800000;
              RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                        (this_00,voxelHit,0.0,method_00);
            }
          }
          iVar40 = (int16_t)puVar25;
          if (((fVar5 == 0.0) && (this_04 != (MVCubeModelBase *)0x0)) &&
             (((TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment <=
               (this_04->klass->_1).naturalAligment &&
              ((MVCubeModelFineGrainedTerrain__Class *)
               (this_04->klass->_1).typeHierarchy
               [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] ==
               TypeInfo__MVCubeModelFineGrainedTerrain)))) {
            auStack_7._8_4_ = (this->fields).currentAmmo.currentCryptoKey;
            VStack_9.x = (float)(this->fields).currentAmmo.hiddenValue;
            VStack_9.y = (float)(this->fields).currentAmmo.fakeValue;
            VStack_9.z = *(float *)&(this->fields).currentAmmo.inited;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            value_00.hiddenValue = (int32_t)VStack_9.x;
            value_00.currentCryptoKey = auStack_7._8_4_;
            value_00.fakeValue = (int32_t)VStack_9.y;
            value_00._12_4_ = VStack_9.z;
            iVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
            pOVar34 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Implicit
                                ((ObscuredInt *)(auStack_7 + 8),iVar23 + 1,(MethodInfo *)0x0);
            iVar23 = pOVar34->hiddenValue;
            iVar33 = pOVar34->fakeValue;
            bVar17 = pOVar34->inited;
            uVar36 = *(undefined3 *)&pOVar34->field_0xd;
            (this->fields).currentAmmo.currentCryptoKey = pOVar34->currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = iVar23;
            (this->fields).currentAmmo.fakeValue = iVar33;
            (this->fields).currentAmmo.inited = bVar17;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar36;
            if (isLocal != 0) {
              if (((this_04->klass->_1).naturalAligment <
                   (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment) ||
                 ((MVCubeModelFineGrainedTerrain__Class *)
                  (this_04->klass->_1).typeHierarchy
                  [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
                  TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
              pos.z = iVar40;
              pos._0_4_ = pVVar3;
              MVCubeModelBase::MVCubeModelBase_RemoveCube(this_04,pos,(MethodInfo *)0x0);
              MVCubeModelBase::MVCubeModelBase_HandleDelta(this_04,(MethodInfo *)0x0);
            }
            RStack_1.m_Direction.y = 0.0;
            RStack_1.m_Direction.x = (float)&UNK_?;
            iVar41 = func_?();
            if (iVar41 == 0) goto code_?;
            position.y = VStack_4.x;
            position.x = fStack_18;
            position.z = in_stack_19;
            SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                      (*(ParticleSystem **)(iVar41 + 0x214),position,1.0,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
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
      *(undefined1 *)((int)this + 0xf8) = *puVar10;
      pCVar2 = *(CubeBullet **)((int)this + 0xf0);
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
  iVar4 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,iVar1,(this->klass->vtable).UpdateWithDirection.methodPtr);
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1((this->fields).currentAmmo,(MethodInfo *)0x0);
  if (iVar1 < iVar4) {
    iVar1 = iVar4;
  }
  pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar1,(MethodInfo *)0x0);
  iVar1 = pOVar5->hiddenValue;
  iVar2 = pOVar5->fakeValue;
  bVar6 = pOVar5->inited;
  uVar7 = *(undefined3 *)&pOVar5->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar5->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = iVar2;
  (this->fields).currentAmmo.inited = bVar6;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar7;
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
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
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
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar5 == '\0';
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

