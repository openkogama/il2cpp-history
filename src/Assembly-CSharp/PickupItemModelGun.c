
/* Boolean CanInsertCubeAtCubePos(IntVector) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_CanInsertCubeAtCubePos
               (PickupItemModelGun *this,IntVector cubePos,MethodInfo *method)

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


/* IEnumerator DoAutoFire() */

IEnumerator *
Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_DoAutoFire
          (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemModelGun___DoAutoFire_d__39);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemModelGun___DoAutoFire_d__39;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Boolean DoLineOfFireCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_DoLineOfFireCheck
               (PickupItemModelGun *this,VoxelHit *hit,MethodInfo *method)

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


/* IntVector GetCubePos(VoxelHit) */

IntVector Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetCubePos
                    (PickupItemModelGun *this,VoxelHit voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  this->klass = (PickupItemModelGun__Class *)0x0;
  *(undefined2 *)&this->monitor = 0;
  voxelHit_00.interactionFlags._0_4_ = voxelHit.interactionFlags._4_4_;
  voxelHit_00._60_4_ = (MVWorldObjectClientManager *)voxelHit.interactionFlags;
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
  bVar1 = PickupItemModelGun_GetCubePosFromFineGrainedTerrain
                    (in_stack_2,voxelHit_00,(float)this,(IntVector *)0x0,unaff_EDI);
  iVar3 = extraout_DX;
  if (bVar1 == 0) {
    voxelHit.interactionFlags._0_4_ = (MVWorldObjectClientManager *)0x0;
    voxelHit._60_4_ = &UNK_?;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      voxelHit.interactionFlags._4_4_ =
           MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
      ;
      voxelHit._60_4_ = &UNK_?;
      voxelHit.interactionFlags._0_4_ = this_00;
      pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_00,
                          MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                         );
      if (pOVar4 != (Object *)0x0) {
        pOVar5 = pOVar4[0x11].klass;
        voxelHit._60_4_ = voxelHit.point.x + voxelHit.normal.x * _UNK_?;
        voxelHit.interactionFlags._4_4_ =
             (MethodInfo *)(voxelHit.point.z + voxelHit.normal.z * _UNK_?);
        voxelHit.interactionFlags._0_4_ =
             (MVWorldObjectClientManager *)(voxelHit.point.y + voxelHit.normal.y * _UNK_?);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          pSStack6 = TypeInfo__SharedCubeFunctions;
          func_?();
        }
        pSStack6 = (SharedCubeFunctions__Class *)0x0;
        voxelHit.collider = (Collider *)&voxelHit.interactionFlags;
        voxelHit.distance = (float)&UNK_?;
        point.y = (float)voxelHit._60_4_;
        point.x = (float)pOVar5;
        point.z = (float)(MVWorldObjectClientManager *)voxelHit.interactionFlags;
        bVar1 = voxelHit.interactionFlags._4_1_;
        voxelHit.transform = (Transform *)pOVar5;
        voxelHit.interactionFlags._4_4_ = (MethodInfo *)(float)voxelHit.interactionFlags._4_4_;
        IVar7 = SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                          ((GameObject *)voxelHit.collider,point,bVar1,(MethodInfo *)0x0);
        iVar3 = IVar7.z;
        uVar8 = *(undefined2 *)(IVar7._0_4_ + 1);
        this->klass = (PickupItemModelGun__Class *)*IVar7._0_4_;
        *(undefined2 *)&this->monitor = uVar8;
        goto code_?;
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    IVar7 = (IntVector)(*pcVar9)();
    return IVar7;
  }
code_?:
  IVar7.z = iVar3;
  IVar7._0_4_ = this;
  return IVar7;
}


/* Boolean GetCubePosFromFineGrainedTerrain(VoxelHit, Single, IntVector ByRef) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetCubePosFromFineGrainedTerrain
               (PickupItemModelGun *this,VoxelHit voxelHit,float maxDistanceToEdge,IntVector *pos,
               MethodInfo *method)

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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,voxelHit._36_4_,(MethodInfo *)0x0);
    if (((this_01 == (MVCubeModelBase *)0x0) ||
        ((this_01->klass->_1).naturalAligment <
         (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment)) ||
       ((MVCubeModelFineGrainedTerrain__Class *)
        (this_01->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) {
code_?:
      *unaff_FS_OFFSET = uVar1;
      return 0;
    }
    gameObject = (this_01->fields)._.gameObject;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pos_00.y = voxelHit.point.x;
    pos_00.x = (float)in_stack_3;
    pos_00.z = voxelHit.point.y;
    edge = Cube::Cube_GetEdge_1
                     (gameObject,(Cube *)voxelHit.woId,voxelHit._28_4_,pos_00,voxelHit._20_6_,
                      (MethodInfo *)0x0);
    edge_00 = Cube::Cube_GetEdgeVerticesWorld
                        ((this_01->fields)._.gameObject,(Cube *)voxelHit.woId,voxelHit._28_4_,edge,
                         voxelHit._20_6_,(MethodInfo *)0x0);
    if (edge_00 != (Vector3__Array *)0x0) {
      if ((edge_00->max_length == 0) || (edge_00->max_length < 2)) {
        func_?();
      }
      else {
        point.y = voxelHit.point.x;
        point.x = (float)in_stack_3;
        point.z._0_2_ = voxelHit.point.y._0_2_;
        point.z._2_2_ = voxelHit.point.y._2_2_;
        bVar4 = MathFunctions::MathFunctions_DistancePointLine
                          (point,edge_00->vector[0],edge_00->vector[1],(float *)&stack0xffffffdc,
                           (MethodInfo *)0x0);
        pIVar5 = TypeRef__MV__WorldObject__Face;
        if ((bVar4 == 0) || (voxelHit.interactionFlags._4_4_ <= fVar2)) goto code_?;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
        if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
        if (pAVar6 != (Array *)0x0) {
          pIVar7 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar6,(MethodInfo *)0x0);
          piVar8 = (int *)&stack0xffffffd8;
          puVar9 = (undefined *)0x0;
          uVar10 = voxelHit.cubePos._0_4_;
          uVar11 = voxelHit.normal.z._2_2_;
          fVar2 = voxelHit.point.x;
          pVVar12 = (Vector3__Array *)voxelHit.point.y;
          fVar13 = voxelHit.point.z;
          method_01 = (MethodInfo *)voxelHit.normal.x;
          fVar14 = voxelHit.normal.y;
          iVar15 = voxelHit.normal.z._0_2_;
          uVar16 = voxelHit._28_4_;
          iVar17 = voxelHit.face;
          uVar18 = voxelHit._36_4_;
          iVar19 = voxelHit.woId;
          pCVar20 = voxelHit.cube;
          fVar21 = voxelHit.distance;
          pCVar22 = voxelHit.collider;
          while (pIVar7 != (IEnumerator *)0x0) {
            iVar23 = 0;
            cVar24 = func_?();
            if (cVar24 == '\0') {
              iVar23 = func_?();
              *piVar8 = iVar23;
              if (iVar23 != 0) {
                func_?();
              }
              if (puVar9 == (undefined *)0x0) goto code_?;
              goto code_?;
            }
            if (iVar23 == 0) break;
            pIVar7 = (IEnumerator *)0x1;
            piVar25 = (int *)func_?();
            if (piVar25 == (int *)0x0) break;
            if (*(Il2CppClass **)(*piVar25 + 0x20) !=
                (TypeInfo__MV__WorldObject__Face->_0).element_class) goto code_?;
            puVar26 = (undefined4 *)func_?();
            pIVar5 = TypeRef__Edge;
            method_00 = (MethodInfo *)*puVar26;
            if (method_00 != (MethodInfo *)voxelHit._28_4_) {
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              puVar9 = &UNK_?;
              wo = (MVWorldObjectClient *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
              if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              piVar8 = (int *)&UNK_?;
              pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)wo,(MethodInfo *)0x0);
              if (pAVar6 == (Array *)0x0) break;
              pIVar7 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar6,(MethodInfo *)0x0);
              uVar27 = SUB42(pIVar7,0);
              uStack_28 = (undefined2)((uint)pIVar7 >> 0x10);
              while( true ) {
                if (CONCAT22(uStack_28,uVar27) == 0) goto code_?;
                uVar27 = SUB42(TypeInfo__System__Collections__IEnumerator,0);
                uStack_28 = (undefined2)((uint)TypeInfo__System__Collections__IEnumerator >> 0x10);
                pIVar7 = (IEnumerator *)0x0;
                cVar24 = func_?();
                if (cVar24 == '\0') break;
                if ((CONCAT22(uStack_28,uVar27) == 0) ||
                   (piVar25 = (int *)func_?(), piVar25 == (int *)0x0)) goto code_?;
                if (*(Il2CppClass **)(*piVar25 + 0x20) != (TypeInfo__Edge->_0).element_class)
                goto code_?;
                uVar27 = 0x4dd4;
                uStack_28 = 0x1069;
                pfVar29 = (float *)func_?();
                face = *pfVar29;
                if (face != 0.0) {
                  fVar30 = 0.0;
                  voxelHit_00.normal.z._2_2_ = uVar11;
                  voxelHit_00.normal.z._0_2_ = iVar15;
                  voxelHit_00.point.y = (float)pVVar12;
                  voxelHit_00.point.x = fVar2;
                  voxelHit_00.point.z = fVar13;
                  voxelHit_00.normal.x = (float)method_01;
                  voxelHit_00.normal.y = fVar14;
                  voxelHit_00.cubePos.x = (short)uVar10;
                  voxelHit_00.cubePos.y = (short)((uint)uVar10 >> 0x10);
                  voxelHit_00.cubePos.z = (int16_t)uVar16;
                  voxelHit_00._30_2_ = SUB42(uVar16,2);
                  voxelHit_00.face = iVar17;
                  voxelHit_00.isCubeHit = (bool)uVar18;
                  voxelHit_00._37_3_ = SUB43(uVar18,1);
                  voxelHit_00.woId = iVar19;
                  voxelHit_00.cube = pCVar20;
                  voxelHit_00.distance = fVar21;
                  voxelHit_00.collider = pCVar22;
                  voxelHit_00.transform._0_2_ = (short)voxelHit.transform;
                  voxelHit_00.transform._2_2_ = voxelHit.transform._2_2_;
                  voxelHit_00._60_4_ = voxelHit._60_4_;
                  voxelHit_00.interactionFlags._0_4_ = (undefined4)voxelHit.interactionFlags;
                  voxelHit_00.interactionFlags._4_4_ = method_00;
                  pVVar12 = edge_00;
                  iVar31 = PickupItemModelGun_GetEdgeVertexMatchCount
                                     (wo,voxelHit_00,(Face__Enum)face,(Edge__Enum)edge_00,
                                      (Vector3__Array *)0x0,method_01);
                  fVar2 = face;
                  fVar13 = fVar30;
                  if (iVar31 == 2) {
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    IVar32.z = voxelHit.normal.z._0_2_;
                    IVar32._0_4_ = &stack0xffffff64;
                    IVar32 = Cube::Cube_GetCubePosAboveFace
                                       (IVar32,CONCAT22((short)((uint)piVar8 >> 0x10),
                                                        voxelHit.cubePos.x),method_00);
                    pIVar33 = IVar32._0_4_;
                    iVar15 = pIVar33->z;
                    IVar32 = *pIVar33;
                    *(undefined4 *)maxDistanceToEdge = *(undefined4 *)pIVar33;
                    *(int16_t *)((int)maxDistanceToEdge + 4) = iVar15;
                    if (this_01 != (MVCubeModelBase *)0x0) {
                      pCVar20 = MVCubeModelBase::MVCubeModelBase_GetCube
                                          (this_01,IVar32,(MethodInfo *)0x0);
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      bVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                        ((CubeBase *)pCVar20,(CubeBase *)0x0,(MethodInfo *)0x0);
                      func_?();
                      func_?();
                      *unaff_FS_OFFSET = pCVar20;
                      return bVar4;
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
  pcVar34 = (code *)swi(3);
  bVar4 = (*pcVar34)();
  return bVar4;
}


/* Int32 GetEdgeVertexMatchCount(MVWorldObjectClient, VoxelHit, Face, Edge, Vector3[]) */

int32_t Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetEdgeVertexMatchCount
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


/* Void HandleCubeHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCubeHit
               (PickupItemModelGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
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
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleCubeHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCubeHitLocal
               (PickupItemModelGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  voxelHit_00._30_2_ = voxelHit.cubePos.y;
  voxelHit_00.cubePos.z = voxelHit.cubePos.x;
  voxelHit_00.point.y = voxelHit.point.x;
  voxelHit_00.point.x = (float)in_stack_1;
  voxelHit_00.point.z = voxelHit.point.y;
  voxelHit_00.normal.x = voxelHit.point.z;
  voxelHit_00.normal.y = voxelHit.normal.x;
  voxelHit_00.normal.z = voxelHit.normal.y;
  voxelHit_00.cubePos._0_4_ = voxelHit.normal.z;
  voxelHit_00.face = voxelHit._28_4_;
  voxelHit_00._36_4_ = voxelHit.face;
  voxelHit_00.woId = voxelHit._36_4_;
  voxelHit_00.cube = (Cube *)voxelHit.woId;
  voxelHit_00.distance = (float)voxelHit.cube;
  voxelHit_00.collider = (Collider *)voxelHit.distance;
  voxelHit_00.transform = (Transform *)voxelHit.collider;
  voxelHit_00._60_4_ = voxelHit.transform;
  voxelHit_00.interactionFlags._0_4_ = voxelHit._60_4_;
  voxelHit_00.interactionFlags._4_4_ =
       (int)(CONCAT26(voxelHit.interactionFlags._2_2_,voxelHit._60_6_) >> 0x20);
  IVar2 = PickupItemModelGun_GetCubePos
                    ((PickupItemModelGun *)&voxelHit.field_0x3c,voxelHit_00,(MethodInfo *)0x0);
  fVar3 = *IVar2._0_4_;
  voxelHit.interactionFlags._2_2_ = *(int16_t *)(IVar2._0_4_ + 1);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar5->fields)._.runtimeEventManagerNetwork;
    material = (this->fields).material;
    voxelHit.collider =
         (Collider *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
    uStack_6 = (undefined3)((uint)in_ECX >> 8);
    uVar7 = uStack_6;
    uStack_8 = material;
    voxelHit.distance = (float)&UNK_?;
    this_01 = (SingleCubeFineGrainedEvent *)func_?();
    voxelHit.face = 0;
    uStack_6._1_2_ = SUB32(uVar7,1);
    voxelHit.cubePos.z = _uStack_8;
    voxelHit._30_2_ = uStack_6._1_2_;
    voxelHit.cubePos.x = voxelHit.interactionFlags._2_2_;
    voxelHit.normal.x = (float)&UNK_?;
    IVar2.z = voxelHit.interactionFlags._2_2_;
    IVar2._0_4_ = fVar3;
    voxelHit.normal.y = (float)this_01;
    voxelHit.normal.z = fVar3;
    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
    SingleCubeFineGrainedEvent__ctor(this_01,IVar2,material,(MethodInfo *)0x0);
    if (this_00 != (RuntimeEventManager *)0x0) {
      voxelHit.collider = (Collider *)0x0;
      voxelHit.woId = (int32_t)&UNK_?;
      voxelHit.cube = (Cube *)this_00;
      voxelHit.distance = (float)this_01;
      RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1(this_00,this_01,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  voxelHit.collider = (Collider *)&UNK_?;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleCursors() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCursors
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x9260);
    func_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x48);
  bVar1 = PickupItemModelGun_DoLineOfFireCheck(this,(VoxelHit *)&stack0xffffffa4,(MethodInfo *)0x0);
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
      voxelHit._38_2_ = in_stack_3;
      voxelHit.isCubeHit = (bool)in_stack_4;
      voxelHit._37_1_ = SUB21(in_stack_4,1);
      voxelHit.point.y = in_stack_5;
      voxelHit.point.x = in_stack_6;
      voxelHit.point.z = in_stack_7;
      voxelHit.normal.x._0_2_ = in_stack_8;
      voxelHit.normal.x._2_2_ = in_stack_9;
      voxelHit.normal.y = in_stack_10;
      voxelHit.normal.z._0_2_ = in_stack_11;
      voxelHit.normal.z._2_2_ = in_stack_12;
      voxelHit.cubePos.x = (int16_t)in_stack_13;
      voxelHit.cubePos.y = SUB42(in_stack_13,2);
      voxelHit.cubePos.z = (int16_t)in_stack_14;
      voxelHit._30_2_ = SUB42(in_stack_14,2);
      voxelHit.face = in_stack_15;
      voxelHit.woId = in_stack_16;
      voxelHit.cube = in_stack_17;
      voxelHit.distance._0_2_ = SUB42(fStack_18,0);
      voxelHit.distance._2_2_ = (short)((uint)fStack_18 >> 0x10);
      voxelHit.collider = pCStack_19;
      voxelHit.transform = in_stack_20;
      voxelHit._60_4_ = in_stack_21;
      voxelHit.interactionFlags._0_4_ = in_stack_22;
      voxelHit.interactionFlags._4_4_ = uStack_23;
      IVar24 = PickupItemModelGun_GetCubePos
                        ((PickupItemModelGun *)&pPStack_25,voxelHit,(MethodInfo *)0x0);
      iVar26 = (IVar24._0_4_)->y;
      BVar27._._.m_CachedPtr = (Component__Fields)(Component__Fields)this;
      bVar1 = PickupItemModelGun_CanInsertCubeAtCubePos(this,*IVar24._0_4_,(MethodInfo *)0x0);
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
      IVar24 = (pGVar2->fields).pos;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      a.z = iVar26;
      a._0_4_ = BVar27._._.m_CachedPtr;
      bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                        (a,IVar24,(MethodInfo *)0x0);
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
      pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar28 == (MVWorldObjectClientManager *)0x0) ||
          (pOVar29 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (pMVar28,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              ), pOVar29 == (Object *)0x0)) || (pGVar2 == (GUICellCursor *)0x0))
      goto code_?;
      IVar24.z = iVar26;
      IVar24._0_4_ = BVar27._._.m_CachedPtr;
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar2,IVar24,(GameObject *)pOVar29[0x11].klass,(MethodInfo *)0x0);
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
      iVar26 = (int16_t)in_stack_14;
      pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar28 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar30 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar28,in_stack_16,(MethodInfo *)0x0);
      if (((pMVar30 == (MVWorldObject *)0x0) ||
          ((pMVar30->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment)) ||
         ((MVCubeModelFineGrainedTerrain__Class *)
          (pMVar30->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
          TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      pPStack_25 = *(PickupItemModelGun__Class **)&(pGVar2->fields).pos;
      iVar31 = (pGVar2->fields).pos.z;
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar32._0_2_ = 0;
      uVar32._2_2_ = 0;
      a_00.z = iVar26;
      a_00.x = (int16_t)in_stack_13;
      a_00.y = SUB42(in_stack_13,2);
      b.z = iVar31;
      b._0_4_ = pPStack_25;
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
      position.z = (int16_t)pGVar2;
      position.x = (int16_t)uVar32;
      position.y = SUB42(uVar32,2);
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar2,position,(GameObject *)pMVar30[1].fields.inputLinkRefs,(MethodInfo *)0x0);
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
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnFire
               (PickupItemModelGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                   );
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemModelGun__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_)
    ;
    func_?(&MethodInfo__PickupItemModelGun__HandleCubeHit_VoxelHit__UnityEngine__Ray_);
    func_?(&StringLiteral_cubeFire);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff84,0,0x48);
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Type.methodPtr);
  if (cVar1 != '\0') {
    return;
  }
  bVar2 = PickupItemModelGun_DoLineOfFireCheck(this,(VoxelHit *)&stack0xffffff84,(MethodInfo *)0x0);
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
    voxelHit._30_2_ = uStack_11;
    voxelHit.face = in_stack_12;
    voxelHit._36_4_ = uStack_13;
    voxelHit.woId = iStack_14;
    voxelHit.cube = in_stack_15;
    voxelHit.distance = in_stack_16;
    voxelHit.collider = in_stack_17;
    voxelHit.transform = in_stack_18;
    voxelHit._60_4_ = in_stack_19;
    voxelHit.interactionFlags._0_4_ = in_stack_20;
    voxelHit.interactionFlags._4_4_ = in_stack_21;
    IVar22 = PickupItemModelGun_GetCubePos
                       ((PickupItemModelGun *)&stack0xfffffff4,voxelHit,(MethodInfo *)0x0);
    bVar2 = PickupItemModelGun_CanInsertCubeAtCubePos(this,*IVar22._0_4_,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
  }
  pTVar23 = (this->fields)._._.muzzlePoint;
  if (pTVar23 != (Transform *)0x0) {
    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar23,(MethodInfo *)0x0);
    this_00 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_CubeGunBullet,*pVVar24,0.0,(MethodInfo *)0x0);
    if ((this_00 != (Bullet *)0x0) &&
       (this_01 = (CubeBullet *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                  Component_GetComponentInChildren_1
                            ((Component *)this_00,
                             CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                            ), this_01 != (CubeBullet *)0x0)) {
      CubeBullet::CubeBullet_SetCubeMaterial(this_01,(this->fields).material,(MethodInfo *)0x0);
      isLocal = (bool)this_01;
      if (isLocal != 0) {
        pBVar25 = (this_00->fields).onHitLocal;
        pBVar26 = (BulletThrowingStar_OnHitDelegate *)func_?();
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar26,(Object *)this,
                   MethodInfo__PickupItemModelGun__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pDVar27 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pBVar25,(Delegate *)pBVar26,(MethodInfo *)0x0);
        if (pDVar27 == (Delegate *)0x0) {
          _UNK_? = (Delegate *)0x0;
        }
        else {
          pDVar28 = (Delegate *)0x0;
          if ((Bullet_OnHitDelegate__Class *)pDVar27->klass == TypeInfo__Bullet__OnHitDelegate) {
            pDVar28 = pDVar27;
          }
          if (pDVar28 == (Delegate *)0x0) goto code_?;
          pDVar29 = (Delegate *)0x0;
          if ((Bullet_OnHitDelegate__Class *)pDVar27->klass == TypeInfo__Bullet__OnHitDelegate) {
            pDVar29 = pDVar27;
          }
          _UNK_? = pDVar28;
          if (pDVar29 == (Delegate *)0x0) goto code_?;
        }
        this_00 = (Bullet *)&UNK_?;
        func_?();
      }
      pBVar25 = (this_00->fields).onHit;
      pBVar26 = (BulletThrowingStar_OnHitDelegate *)func_?();
      BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                (pBVar26,(Object *)this,
                 MethodInfo__PickupItemModelGun__HandleCubeHit_VoxelHit__UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      pDVar27 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pBVar25,(Delegate *)pBVar26,(MethodInfo *)0x0);
      if (pDVar27 == (Delegate *)0x0) {
        _UNK_? = (Delegate *)0x0;
      }
      else {
        pDVar28 = (Delegate *)0x0;
        if ((Bullet_OnHitDelegate__Class *)pDVar27->klass == TypeInfo__Bullet__OnHitDelegate) {
          pDVar28 = pDVar27;
        }
        if (pDVar28 == (Delegate *)0x0) goto code_?;
        pDVar29 = (Delegate *)0x0;
        if ((Bullet_OnHitDelegate__Class *)pDVar27->klass == TypeInfo__Bullet__OnHitDelegate) {
          pDVar29 = pDVar27;
        }
        _UNK_? = pDVar28;
        if (pDVar29 == (Delegate *)0x0) goto code_?;
      }
      func_?();
      pMVar30 = (this->fields)._._.owner;
      if (pMVar30 != (MVPickupOwner *)0x0) {
        pPStack_31 = (PickupItemModelGun__Class *)(pMVar30->fields).lookOrigin.x;
        pMStack_32 = (MonitorData *)(pMVar30->fields).lookOrigin.y;
        pVVar24 = MVPickupOwner::MVPickupOwner_get_LookDirection
                           ((Vector3 *)&stack0xffffffe4,(this->fields)._._.owner,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                  ((Vector3 *)&stack0xffffffe4,*pVVar24,(MethodInfo *)0x0);
        pMVar30 = (this->fields)._._.owner;
        if (pMVar30 != (MVPickupOwner *)0x0) {
          projectileSpeed = (this->fields).speed;
          uVar33 = 0;
          uVar34 = SUB42(pMVar30,0);
          uVar35 = (undefined2)((uint)pMVar30 >> 0x10);
          puVar36 = &UNK_?;
          pMVar37 = (MonitorData *)
                    MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar30,projectileSpeed,(MethodInfo *)0x0);
          range = (this->fields).range;
          pMVar30 = (this->fields)._._.owner;
          pMStack_32 = pMVar37;
          if (pMVar30 != (MVPickupOwner *)0x0) {
            puVar38 = &UNK_?;
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar30->klass->vtable).get_IgnoreWOIDs.method)();
            lineOfFire.m_Origin.y._2_2_ = uVar35;
            lineOfFire.m_Origin.y._0_2_ = uVar34;
            lineOfFire.m_Origin.x = (float)puVar36;
            lineOfFire.m_Origin.z = projectileSpeed;
            lineOfFire.m_Direction.x = (float)uVar33;
            lineOfFire.m_Direction.y = (float)puVar38;
            lineOfFire.m_Direction.z = (float)pMVar30;
            Bullet::Bullet_Fire((Bullet *)&UNK_?,(float)pMStack_32,range,lineOfFire,
                                ignoreWoIDs,0,(MethodInfo *)0x0);
            this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
            ;
            clip = (this->fields).firePrimary;
            pTVar23 = (this->fields)._._.muzzlePoint;
            if ((pTVar23 != (Transform *)0x0) &&
               (pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffe4,pTVar23,(MethodInfo *)0x0),
               this_02 != (AudioManager *)0x0)) {
              AudioManager::AudioManager_Play
                        (this_02,StringLiteral_cubeFire,clip,*pVVar24,0.6,
                         SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
              piVar39 = &(this->fields).currentAmmo;
              *piVar39 = *piVar39 + -1;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void OnFireSecondary(Boolean) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnFireSecondary
               (PickupItemModelGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                   );
    func_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    func_?(&
                    RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    func_?(&StringLiteral_cube_Destroyed);
    func_?(&StringLiteral_Player);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  func_?(&pMStack_1,0,0x48);
  pAVar2 = (AudioSource *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                      );
  if (pAVar2 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (pAVar2,(this->fields).releaseSound,(MethodInfo *)0x0);
    pAVar2 = (AudioSource *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                        );
    if (pAVar2 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,0,(MethodInfo *)0x0);
      pPVar3 = this;
      pAVar2 = (AudioSource *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this,
                           UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                          );
      if (pAVar2 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar2,(MethodInfo *)0x0);
        pMVar4 = (this->fields)._._.owner;
        if (pMVar4 != (MVPickupOwner *)0x0) {
          fVar5 = (pMVar4->fields).lookOrigin.y;
          fVar6 = (pMVar4->fields).lookOrigin.z;
          iVar7 = 0x5980;
          pVVar8 = MVPickupOwner::MVPickupOwner_get_LookDirection
                              ((Vector3 *)&stack0xffffffe0,(this->fields)._._.owner,
                               (MethodInfo *)0x0);
          this_00 = (PickupItemModelGun *)pVVar8->x;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xfffffff0,*pVVar8,(MethodInfo *)0x0);
          fVar9 = pVVar8->x;
          fVar10 = pVVar8->y;
          fVar11 = pVVar8->z;
          uVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          uVar13 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Logic,(MethodInfo *)0x0);
          auVar14._16_4_ = fVar11;
          auVar14._12_4_ = fVar10;
          auVar14._4_4_ = fVar6;
          auVar14._0_4_ = fVar5;
          auVar14._8_4_ = fVar9;
          auVar14._20_4_ = 0;
          bVar15 = CollisionDetection::CollisionDetection_MVHit_1
                             ((Ray)(auVar14 << 0x20),(VoxelHit *)&pMStack_1,(this->fields).range,
                              (HashSet_1_System_Int32_ *)0x0,
                              ~(1 << (uVar12 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar13 & 0x1f)),
                              (MethodInfo *)0x0);
          if (bVar15 == 0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                ((Vector3 *)&stack0xffffffe0,(Ray *)&stack0xffffffc8,
                                 (this->fields).range,(MethodInfo *)0x0);
            pPVar16 = (PickupItemModelGun *)pVVar8->x;
            pPVar17 = (PickupItemModelGun *)pVVar8->y;
            pPVar3 = (PickupItemModelGun *)pVVar8->z;
          }
          else {
            this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM(pMStack_1);
            if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pPVar17 = (PickupItemModelGun *)0x0;
            pMVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_02,(int32_t)this_00,(MethodInfo *)0x0);
            pPVar16 = this_00;
            if (((pMVar18 != (MVWorldObject *)0x0) &&
                ((TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment <=
                 (pMVar18->klass->_1).naturalAligment)) &&
               ((MVCubeModelFineGrainedTerrain__Class *)
                (pMVar18->klass->_1).typeHierarchy
                [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] ==
                TypeInfo__MVCubeModelFineGrainedTerrain)) {
              piVar19 = &(this->fields).currentAmmo;
              *piVar19 = *piVar19 + 1;
              pPVar16 = pPVar17;
              if (isLocal != 0) {
                pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar20 == (MVNetworkGame *)0x0) ||
                   ((pMVar20->fields).worldNetwork == (WorldNetwork *)0x0)) goto code_?;
                this_00 = (PickupItemModelGun *)func_?();
                pPVar3 = (PickupItemModelGun *)0x0;
                position_00.z = iVar7;
                position_00._0_4_ = &UNK_?;
                MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
                SingleCubeFineGrainedEvent__ctor_1
                          ((SingleCubeFineGrainedEvent *)this_00,position_00,(MethodInfo *)0x0);
                pPVar16 = (PickupItemModelGun *)0x0;
                RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                          ((RuntimeEventManager *)&UNK_?,
                           (SingleCubeFineGrainedEvent *)this_00,(MethodInfo *)0x0);
              }
              this_03 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                  ((MethodInfo *)0x0);
              if (this_03 == (AudioManager *)0x0) goto code_?;
              position_01.y = (float)pPVar16;
              position_01.x = (float)this_00;
              position_01.z = (float)pPVar3;
              pPVar17 = pPVar3;
              AudioManager::AudioManager_Play
                        (this_03,StringLiteral_cube_Destroyed,(this->fields).cubeDestroyedSound,
                         position_01,0.6,SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
            }
          }
          this_01 = (this->fields)._._.muzzlePoint;
          original = (this->fields).railGunRayPrefab;
          if (this_01 != (Transform *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffbc,this_01,(MethodInfo *)0x0);
            fVar6 = pVVar8->y;
            fVar9 = pVVar8->z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pQVar21 = TypeInfo__UnityEngine__Quaternion->static_fields;
            fVar5 = (pQVar21->identityQuaternion).x;
            fVar10 = (pQVar21->identityQuaternion).y;
            fVar11 = (pQVar21->identityQuaternion).z;
            fVar22 = (pQVar21->identityQuaternion).w;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            position.y = fVar6;
            position.x = (float)
                         RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
            ;
            position.z = fVar9;
            rotation.y = fVar10;
            rotation.x = fVar5;
            rotation.z = fVar11;
            rotation.w = fVar22;
            pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                                ((Object *)original,position,rotation,
                                 RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                                );
            if (pOVar23 != (Object *)0x0) {
              OVar24.monitor = (MonitorData *)pPVar17;
              OVar24.klass = (Object__Class *)pPVar16;
              pOVar23[2] = OVar24;
              pMVar25 = _UNK_?;
              pOVar26 = _UNK_?;
              pMVar27 = _UNK_?;
              pOVar28 = _UNK_?;
              pOVar23[3].klass = (Object__Class *)pPVar3;
              pOVar23[4].klass = pOVar28;
              pOVar23[4].monitor = pMVar27;
              pOVar23[5].klass = pOVar26;
              pOVar23[5].monitor = pMVar25;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnStateChanged
               (PickupItemModelGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
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
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                           (Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_ESI.m_Index == 0) goto code_?;
    if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_ESI.m_Index,(Object *)StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
        (TypeInfo__System__Byte->_0).element_class) {
      puVar2 = (uint8_t *)func_?();
      (this->fields).material = *puVar2;
      this_00 = (CubeBullet *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_GetComponentInChildren_1
                          ((Component *)this,
                           CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                          );
      unaff_ESI.m_Index = (int32_t)this;
      if (this_00 != (CubeBullet *)0x0) {
        CubeBullet::CubeBullet_SetCubeMaterial(this_00,(this->fields).material,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI.m_Index);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  func_?();
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
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if (((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
       (pMVar2 = (pMVar1->fields)._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) {
      pMVar3 = pMVar2->klass;
      if (((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (pMVar3->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)
          (pMVar3->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] ==
          TypeInfo__MVAvatarLocal)) {
        return 1;
      }
    }
    return 0;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_TriggerBegin
               (PickupItemModelGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Got_TriggerStart__but_were_firin);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isFiring == 0) {
    if ((this->fields).waitingToFire == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PickupItemModelGun___DoAutoFire_d__39);
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__PickupItemModelGun___DoAutoFire_d__39;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?(value + 2,this);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Got_TriggerStart__but_were_firin,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_Update
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                   );
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = PickupItemModelGun_ShowCursors(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    PickupItemModelGun_HandleCursors(this,(MethodInfo *)0x0);
  }
  if ((this->fields).fireSecondary != 0) {
    pAVar2 = (AudioSource *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                       );
    if (pAVar2 == (AudioSource *)0x0) goto code_?;
    x = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                  (pAVar2,(MethodInfo *)0x0);
    y = (this->fields).chargeSound;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pAVar2 = (AudioSource *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                         );
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (pAVar2,(this->fields).chargeSound,(MethodInfo *)0x0);
      pAVar2 = (AudioSource *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                         );
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,1,(MethodInfo *)0x0);
      pAVar2 = (AudioSource *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                         );
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar2,(MethodInfo *)0x0);
    }
  }
  cVar3 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)();
  if (cVar3 != '\0') {
    pCVar4 = (this->fields).cubeBullet;
    if ((pCVar4 == (CubeBullet *)0x0) ||
       (pRVar5 = (Renderer *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pCVar4,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                           ), pRVar5 == (Renderer *)0x0)) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (pRVar5,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pCVar4 = (this->fields).cubeBullet;
      if ((pCVar4 != (CubeBullet *)0x0) &&
         (pRVar5 = (Renderer *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)pCVar4,
                              UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                             ), pRVar5 != (Renderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (pRVar5,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  cVar3 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Type.methodPtr);
  if (cVar3 != '\0') {
    return;
  }
  pCVar4 = (this->fields).cubeBullet;
  if ((pCVar4 != (CubeBullet *)0x0) &&
     (pRVar5 = (Renderer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pCVar4,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                         ), pRVar5 != (Renderer *)0x0)) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (pRVar5,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pCVar4 = (this->fields).cubeBullet;
    if ((pCVar4 != (CubeBullet *)0x0) &&
       (pRVar5 = (Renderer *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pCVar4,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                           ), pRVar5 != (Renderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar5,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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

