
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
  value = (Object *)func_?(TypeInfo__PickupItemModelGun___DoAutoFire_d__39);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
    origin.z = fVar3;
    origin.x = (float)(undefined4)uStack_2;
    origin.y = (float)uStack_2._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              ((Ray *)&stack0xffffffd0,origin,*pVVar4,(MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Default,(MethodInfo *)0x0);
    source = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                               ((Void *)(1 << ((byte)iVar6 & 0x1f)),(MethodInfo *)0x0);
    fVar3 = (this->fields).range;
    this_00 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar1 = (this->fields)._._.owner;
      if ((pMVar1 != (MVPickupOwner *)0x0) &&
         (pMVar7 = (pMVar1->fields)._.worldObjectParent, pMVar7 != (MVWorldObjectClient *)0x0)) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Add
                  ((HashSet_1_System_Object_ *)this_00,(Object *)(pMVar7->fields)._.id,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        layerMask = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                              (source,(MethodInfo *)0x0);
        bVar8 = CollisionDetection::CollisionDetection_MVHit_1
                          ((Ray)ZEXT424(layerMask),hit,fVar3,(HashSet_1_System_Int32_ *)this_00,
                           (int32_t)layerMask,(MethodInfo *)0x0);
        return bVar8;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
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
  voxelHit_00._60_4_ = (SharedCubeFunctions__Class *)voxelHit.interactionFlags;
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
      pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_00,
                          MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                         );
      if (pOVar4 != (Object *)0x0) {
        pOVar5 = pOVar4[0x11].klass;
        fVar6 = voxelHit.point.x + voxelHit.normal.x * _UNK_?;
        pCVar7 = (Collider *)(voxelHit.point.y + voxelHit.normal.y * _UNK_?);
        pTVar8 = (Transform *)(voxelHit.point.z + voxelHit.normal.z * _UNK_?);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          voxelHit.interactionFlags._0_4_ = TypeInfo__SharedCubeFunctions;
          voxelHit._60_4_ = &UNK_?;
          func_?();
        }
        voxelHit.interactionFlags._0_4_ = (SharedCubeFunctions__Class *)0x0;
        voxelHit._60_4_ = 0;
        voxelHit.woId = (int32_t)&voxelHit.interactionFlags;
        voxelHit._36_4_ = &UNK_?;
        point.y = fVar6;
        point.x = (float)pOVar5;
        point.z = (float)pCVar7;
        voxelHit.transform._0_1_ = (bool)pTVar8;
        bVar1 = (bool)voxelHit.transform;
        voxelHit.cube = (Cube *)pOVar5;
        voxelHit.distance = fVar6;
        voxelHit.collider = pCVar7;
        voxelHit.transform = pTVar8;
        IVar9 = SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                           ((GameObject *)voxelHit.woId,point,bVar1,(MethodInfo *)0x0);
        iVar3 = IVar9.z;
        uVar10 = *(undefined2 *)(IVar9._0_4_ + 1);
        this->klass = (PickupItemModelGun__Class *)*IVar9._0_4_;
        *(undefined2 *)&this->monitor = uVar10;
        goto code_?;
      }
    }
    voxelHit.interactionFlags._0_4_ = (SharedCubeFunctions__Class *)&UNK_?;
    func_?();
    pcVar11 = (code *)swi(3);
    IVar9 = (IntVector)(*pcVar11)();
    return IVar9;
  }
code_?:
  IVar9.z = iVar3;
  IVar9._0_4_ = this;
  return IVar9;
}


/* Boolean GetCubePosFromFineGrainedTerrain(VoxelHit, Single, IntVector ByRef) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetCubePosFromFineGrainedTerrain
               (PickupItemModelGun *this,VoxelHit voxelHit,float maxDistanceToEdge,IntVector *pos,
               MethodInfo *method)

{
  uVar1 = (undefined2)*unaff_FS_OFFSET;
  uStack_2 = (undefined2)(*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = (uint)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Debug);
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,voxelHit._36_4_,(MethodInfo *)0x0);
    if (((pMVar3 == (MVWorldObject *)0x0) ||
        ((pMVar3->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth)) ||
       ((MVCubeModelFineGrainedTerrain__Class *)
        (pMVar3->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) {
code_?:
      *unaff_FS_OFFSET = CONCAT22(uStack_2,uVar1);
      return 0;
    }
    gameObject = pMVar3[1].fields.inputLinkRefs;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pos_00.y = voxelHit.point.x;
    pos_00.x = (float)in_stack_4;
    pos_00.z = voxelHit.point.y;
    IVar5 = voxelHit._20_6_;
    EVar6 = Cube::Cube_GetEdge_1
                       ((GameObject *)gameObject,(Cube *)voxelHit.woId,voxelHit._28_4_,pos_00,IVar5
                        ,(MethodInfo *)0x0);
    pVVar7 = Cube::Cube_GetEdgeVerticesWorld
                        ((GameObject *)pMVar3[1].fields.inputLinkRefs,(Cube *)voxelHit.woId,
                         voxelHit._28_4_,EVar6,IVar5,(MethodInfo *)0x0);
    fVar8 = 0.0;
    if (pVVar7 != (Vector3__Array *)0x0) {
      if ((pVVar7->max_length == 0) || (pVVar7->max_length < 2)) {
        func_?();
code_?:
        func_?();
      }
      else {
        pVVar9 = pVVar7->vector + 1;
        fVar10 = pVVar9->x;
        pMVar11 = (MonitorData *)pVVar9->y;
        pVVar12 = pVVar7->vector;
        pMVar13 = (MonitorData *)pVVar12->x;
        fVar14 = pVVar12->y;
        pMVar15 = (MonitorData *)pVVar7->vector[0].z;
        uVar16 = voxelHit.point.y._0_2_;
        uVar17 = voxelHit.point.y._2_2_;
        point.y = voxelHit.point.x;
        point.x = (float)in_stack_4;
        point.z._0_2_ = uVar16;
        point.z._2_2_ = uVar17;
        bVar18 = MathFunctions::MathFunctions_DistancePointLine
                          (point,*pVVar12,*pVVar9,(float *)&stack0xffffffc8,(MethodInfo *)0x0);
        pIVar19 = TypeRef__MV__WorldObject__Face;
        if ((bVar18 == 0) || (voxelHit.interactionFlags._4_4_ <= fVar8)) goto code_?;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar20 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
        if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar21 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar20,(MethodInfo *)0x0);
        if (pAVar21 != (Array *)0x0) {
          pIVar22 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar21,(MethodInfo *)0x0);
          piVar23 = (int *)&stack0xffffffc4;
          uVar24 = 0;
          while (pIVar22 != (IEnumerator *)0x0) {
            iVar25 = 0;
            cVar26 = func_?();
            iVar27 = (int)(uVar24 >> 0x20);
            if (cVar26 == '\0') {
              iVar25 = func_?();
              *piVar23 = iVar25;
              if (iVar25 != 0) {
                func_?();
              }
              if (iVar27 != 0) goto code_?;
              goto code_?;
            }
            if (iVar25 == 0) break;
            pIVar22 = (IEnumerator *)0x1;
            piVar28 = (int *)func_?();
            if (piVar28 == (int *)0x0) break;
            if (*(Il2CppClass **)(*piVar28 + 0x20) !=
                (TypeInfo__MV__WorldObject__Face->_0).element_class) goto code_?;
            pFVar29 = (Face__Enum *)func_?();
            pIVar19 = TypeRef__Edge;
            method_00 = (MethodInfo *)*pFVar29;
            if (method_00 != (MethodInfo *)voxelHit._28_4_) {
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar20 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
              if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              uVar24 = 0x1055295700000000;
              pAVar21 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar20,(MethodInfo *)0x0);
              if (pAVar21 == (Array *)0x0) break;
              piVar23 = (int *)&UNK_?;
              pIVar22 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar21,(MethodInfo *)0x0);
              while( true ) {
                if (pIVar22 == (IEnumerator *)0x0) goto code_?;
                pIVar22 = (IEnumerator *)0x0;
                pIVar30 = TypeInfo__System__Collections__IEnumerator;
                cVar26 = func_?();
                if (cVar26 == '\0') break;
                if ((pIVar30 == (IEnumerator__Class *)0x0) ||
                   (piVar28 = (int *)func_?(), piVar28 == (int *)0x0))
                goto code_?;
                if (*(Il2CppClass **)(*piVar28 + 0x20) != (TypeInfo__Edge->_0).element_class)
                goto code_?;
                pIVar22 = (IEnumerator *)&UNK_?;
                pEVar31 = (Edge__Enum *)func_?();
                EVar6 = *pEVar31;
                if (EVar6 != Edge__Enum_None) {
                  gameObject_00 = (GameObject *)piVar28[0x22];
                  pMVar32 = pMVar13;
                  fVar8 = fVar14;
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    uVar24 = CONCAT44((int)(uVar24 >> 0x20),TypeInfo__Cube);
                    func_?();
                    pMVar32 = pMVar13;
                    fVar8 = fVar14;
                  }
                  uVar24 = uVar24 & 0xffffffff00000000;
                  pVVar7 = Cube::Cube_GetEdgeVerticesWorld
                                      (gameObject_00,(Cube *)voxelHit.woId,(Face__Enum)method_00,
                                       EVar6,IVar5,(MethodInfo *)0x0);
                  if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                  pIVar22 = (IEnumerator *)&stack0xffffff80;
                  func_?();
                  uVar33 = 0;
                  piVar23 = (int *)&UNK_?;
                  func_?();
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  puVar34 = (undefined *)0x41200000;
                  fVar14 = (float)CONCAT22(uVar17,uVar16);
                  pMVar13 = (MonitorData *)&UNK_?;
                  start.y = (float)pMVar32;
                  start.x = fVar14;
                  start.z = fVar8;
                  end.y = fVar10;
                  end.x = (float)pMVar15;
                  end.z = (float)pMVar11;
                  color.g = (float)_UNK_?;
                  color.r = (float)_UNK_?;
                  color.b = (float)_UNK_?;
                  color.a = _UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
                            (start,end,color,10.0,(MethodInfo *)0x0);
                  iVar27 = 0;
                  pMVar11 = pMVar15;
                  for (iVar25 = 0; uVar35 = (undefined2)((uint)uVar33 >> 0x10),
                      iVar25 < *(int *)(puVar34 + 0xc); iVar25 = iVar25 + 1) {
                    pIVar22 = (IEnumerator *)&stack0xffffffa0;
                    func_?();
                    uVar33 = 0;
                    func_?();
                    fVar36 = (float10)func_?();
                    if ((float)fVar36 < _UNK_?) {
                      iVar27 = iVar27 + 1;
                    }
                    piVar23 = (int *)0x1;
                    func_?();
                    uVar24 = 0;
                    puVar34 = &UNK_?;
                    fVar36 = (float10)func_?();
                    if ((float)fVar36 < _UNK_?) {
                      iVar27 = iVar27 + 1;
                    }
                  }
                  pMVar15 = pMVar32;
                  fVar10 = fVar8;
                  if (iVar27 == 2) {
                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    IVar5.z = voxelHit.normal.z._0_2_;
                    IVar5._0_4_ = &stack0xffffff60;
                    IVar5 = Cube::Cube_GetCubePosAboveFace
                                       (IVar5,CONCAT22(uVar35,voxelHit.cubePos.x),method_00);
                    uVar37 = *(ushort *)(IVar5._0_4_ + 1);
                    uVar33 = *IVar5._0_4_;
                    *(undefined4 *)maxDistanceToEdge = uVar33;
                    *(ushort *)((int)maxDistanceToEdge + 4) = uVar37;
                    iVar27 = func_?();
                    if ((iVar27 != 0) &&
                       (this_01 = (MVCubeModelBase *)func_?(),
                       this_01 != (MVCubeModelBase *)0x0)) {
                      pos_01.z = uVar37;
                      pos_01.x = (short)uVar33;
                      pos_01.y = (short)((uint)uVar33 >> 0x10);
                      a = MVCubeModelBase::MVCubeModelBase_GetCube(this_01,pos_01,(MethodInfo *)0x0)
                      ;
                      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      bVar18 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                                        ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
                      bVar18 = bVar18 != 0;
                      func_?();
                      func_?();
                      *unaff_FS_OFFSET = (uint)uVar37;
                      return bVar18;
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
  pcVar38 = (code *)swi(3);
  bVar18 = (*pcVar38)();
  return bVar18;
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
    if (this_01 != (SingleCubeFineGrainedEvent *)0x0) {
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
        RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                  (this_00,this_01,(MethodInfo *)0x0);
        return;
      }
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
    func_?(0x2574);
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
      MVar27._._._.m_CachedPtr = (Behaviour__Fields)(Behaviour__Fields)this;
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
      a._0_4_ = MVar27._._._.m_CachedPtr;
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
      IVar24._0_4_ = MVar27._._._.m_CachedPtr;
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
          ((pMVar30->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth)) ||
         ((MVCubeModelFineGrainedTerrain__Class *)
          (pMVar30->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth - 1] !=
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
  func_?(&stack0xffffff78,0,0x48);
  cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                    (this,(this->klass->vtable).get_IsAmmoDepleted.method);
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
    voxelHit.transform = pTStack_17;
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
    fVar25 = pVVar23->y;
    fVar26 = pVVar23->z;
    fVar27 = 0.0;
    this_00 = Bullet::Bullet_CreateBullet(PoolEnums__Enum_CubeGunBullet,*pVVar23,(MethodInfo *)0x0);
    if (this_00 != (Bullet *)0x0) {
      VStack_24.z = (float)&UNK_?;
      this_01 = (CubeBullet *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_GetComponentInChildren_1
                          ((Component *)this_00,
                           CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                          );
      if (this_01 != (CubeBullet *)0x0) {
        CubeBullet::CubeBullet_SetCubeMaterial(this_01,(this->fields).material,(MethodInfo *)0x0);
        if (isLocal != 0) {
          pBVar28 = (this_00->fields).onHitLocal;
          pBVar29 = (BulletThrowingStar_OnHitDelegate *)func_?();
          if (pBVar29 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar29,(Object *)this,
                     MethodInfo__PickupItemModelGun__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          VStack_24.z = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                         ((Delegate *)pBVar28,(Delegate *)pBVar29,(MethodInfo *)0x0)
          ;
          if ((Bullet_OnHitDelegate *)VStack_24.z == (Bullet_OnHitDelegate *)0x0) {
            (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            pBVar28 = (Bullet_OnHitDelegate *)0x0;
            if (((Bullet_OnHitDelegate *)VStack_24.z)->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar28 = (Bullet_OnHitDelegate *)VStack_24.z;
            }
            if (pBVar28 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            (this_00->fields).onHitLocal = pBVar28;
            pBVar28 = (Bullet_OnHitDelegate *)0x0;
            if (((Bullet_OnHitDelegate *)VStack_24.z)->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar28 = (Bullet_OnHitDelegate *)VStack_24.z;
            }
            if (pBVar28 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          }
          VStack_24.z = (float)&(this_00->fields).onHitLocal;
          VStack_24.y = (float)&UNK_?;
          func_?();
        }
        pBVar28 = (this_00->fields).onHit;
        pBVar29 = (BulletThrowingStar_OnHitDelegate *)func_?();
        if (pBVar29 != (BulletThrowingStar_OnHitDelegate *)0x0) {
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar29,(Object *)this,
                     MethodInfo__PickupItemModelGun__HandleCubeHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          fVar30 = 0.0;
          VStack_24.z = (float)mscorlib.dll::System::Delegate::Delegate_Combine
                                         ((Delegate *)pBVar28,(Delegate *)pBVar29,(MethodInfo *)0x0)
          ;
          if ((Bullet_OnHitDelegate *)VStack_24.z == (Bullet_OnHitDelegate *)0x0) {
            (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            pBVar31 = (Bullet_OnHitDelegate *)0x0;
            if (((Bullet_OnHitDelegate *)VStack_24.z)->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar31 = (Bullet_OnHitDelegate *)VStack_24.z;
            }
            if (pBVar31 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            (this_00->fields).onHit = pBVar31;
            pBVar31 = (Bullet_OnHitDelegate *)0x0;
            if (((Bullet_OnHitDelegate *)VStack_24.z)->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar31 = (Bullet_OnHitDelegate *)VStack_24.z;
            }
            if (pBVar31 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          }
          VStack_24.z = (float)&(this_00->fields).onHit;
          VStack_24.y = (float)&UNK_?;
          func_?();
          pMVar32 = (this->fields)._._.owner;
          if (pMVar32 != (MVPickupOwner *)0x0) {
            uVar33._0_4_ = (PickupItemModelGun__Class *)(pMVar32->fields).lookOrigin.x;
            uVar33._4_4_ = (MonitorData *)(pMVar32->fields).lookOrigin.y;
            fVar34 = (pMVar32->fields).lookOrigin.z;
            pVVar23 = MVPickupOwner::MVPickupOwner_get_LookDirection
                               (&VStack_24,(this->fields)._._.owner,(MethodInfo *)0x0);
            origin.z = fVar34;
            origin.x = (float)(PickupItemModelGun__Class *)uVar33;
            origin.y = (float)SUB84(uVar33,4);
            UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                      ((Ray *)&stack0xffffffd0,origin,*pVVar23,(MethodInfo *)0x0);
            pMVar32 = (this->fields)._._.owner;
            if (pMVar32 != (MVPickupOwner *)0x0) {
              speed = (MonitorData *)
                      MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                (pMVar32,(this->fields).speed,(MethodInfo *)0x0);
              fVar34 = (this->fields).range;
              pMVar32 = (this->fields)._._.owner;
              VStack_24.z = fVar27;
              VStack_24.y = fVar26;
              if (pMVar32 != (MVPickupOwner *)0x0) {
                ignoreWoIDs = (HashSet_1_System_Int32_ *)
                              (*(pMVar32->klass->vtable).get_IgnoreWOIDs.methodPtr)();
                lineOfFire.m_Origin.y = (float)pBVar29;
                lineOfFire.m_Origin.x = (float)pBVar28;
                lineOfFire.m_Origin.z = fVar30;
                lineOfFire.m_Direction.x = fVar25;
                lineOfFire.m_Direction.y = VStack_24.y;
                lineOfFire.m_Direction.z = VStack_24.z;
                Bullet::Bullet_Fire(this_00,(float)speed,fVar34,lineOfFire,ignoreWoIDs,
                                    (MethodInfo *)0x0);
                this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                clip = (this->fields).firePrimary;
                pTVar22 = (this->fields)._._.muzzlePoint;
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
code_?:
  VStack_24.z = (float)func_?();
code_?:
  VStack_24.y = (float)&UNK_?;
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void OnFireSecondary(Boolean) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnFireSecondary
               (PickupItemModelGun *this,bool isLocal,MethodInfo *method)

{
  pPVar1 = this;
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
  fVar2 = 0.0;
  fVar3 = 0.0;
  func_?(&puStack_4,0,0x48);
  pAVar5 = (AudioSource *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                      );
  if (pAVar5 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (pAVar5,(this->fields).releaseSound,(MethodInfo *)0x0);
    pAVar5 = (AudioSource *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                        );
    if (pAVar5 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar5,0,(MethodInfo *)0x0);
      pSVar6 = (String *)&UNK_?;
      pPVar7 = this;
      pAVar5 = (AudioSource *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this,
                           UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                          );
      if (pAVar5 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                  (pAVar5,(MethodInfo *)0x0);
        pMVar8 = (this->fields)._._.owner;
        if (pMVar8 != (MVPickupOwner *)0x0) {
          uVar9 = (pMVar8->fields).lookOrigin.x;
          uVar10 = (pMVar8->fields).lookOrigin.y;
          fVar11 = (pMVar8->fields).lookOrigin.z;
          uVar12 = (undefined2)uVar9;
          uVar13 = (undefined2)((uint)uVar9 >> 0x10);
          pVVar14 = MVPickupOwner::MVPickupOwner_get_LookDirection
                              ((Vector3 *)&stack0xffffffe4,(this->fields)._._.owner,
                               (MethodInfo *)0x0);
          id = (int32_t)pVVar14->x;
          origin.x._2_2_ = uVar13;
          origin.x._0_2_ = uVar12;
          origin.y = (float)uVar10;
          origin.z = fVar11;
          UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                    ((Ray *)&stack0xffffffcc,origin,*pVVar14,(MethodInfo *)0x0);
          uVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          uVar16 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Logic,(MethodInfo *)0x0);
          fVar11 = (this->fields).range;
          uVar15 = ~(1 << (uVar15 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar16 & 0x1f));
          ray.m_Origin.y = 0.0;
          ray.m_Origin.x = fVar11;
          ray.m_Origin.z = (float)uVar15;
          ray.m_Direction.x = 0.0;
          ray.m_Direction.y = fVar2;
          ray.m_Direction.z = fVar3;
          bVar17 = CollisionDetection::CollisionDetection_MVHit_1
                             (ray,(VoxelHit *)&puStack_4,fVar11,(HashSet_1_System_Int32_ *)0x0,
                              uVar15,(MethodInfo *)0x0);
          if (bVar17 == 0) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                ((Vector3 *)&stack0xffffffe4,(Ray *)&stack0xffffffcc,
                                 (this->fields).range,(MethodInfo *)0x0);
            pSVar6 = (String *)pVVar14->y;
            pPVar7 = (PickupItemModelGun *)pVVar14->z;
          }
          else {
            uVar12 = SUB42(puStack_4,0);
            uVar13 = (undefined2)((uint)puStack_4 >> 0x10);
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_01,id,(MethodInfo *)0x0);
            if (((pMVar18 != (MVWorldObject *)0x0) &&
                ((TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth <=
                 (pMVar18->klass->_1).typeHierarchyDepth)) &&
               ((MVCubeModelFineGrainedTerrain__Class *)
                (pMVar18->klass->_1).typeHierarchy
                [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth - 1] ==
                TypeInfo__MVCubeModelFineGrainedTerrain)) {
              piVar19 = &(this->fields).currentAmmo;
              *piVar19 = *piVar19 + 1;
              this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                  ((MethodInfo *)0x0);
              if (this_02 == (AudioManager *)0x0) goto code_?;
              position.x._2_2_ = uVar13;
              position.x._0_2_ = uVar12;
              pPVar20 = &this->fields;
              this._0_2_ = SUB42(pSVar6,0);
              this._2_2_ = (undefined2)((uint)pSVar6 >> 0x10);
              position.y._0_2_ = this._0_2_;
              position.y._2_2_ = this._2_2_;
              position.z = (float)pPVar7;
              pSVar6 = StringLiteral_cube_Destroyed;
              AudioManager::AudioManager_Play
                        (this_02,StringLiteral_cube_Destroyed,pPVar20->cubeDestroyedSound,position,
                         0.6,SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
            }
          }
          this_00 = (pPVar1->fields)._._.muzzlePoint;
          original = (pPVar1->fields).railGunRayPrefab;
          if (this_00 != (Transform *)0x0) {
            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffc0,this_00,(MethodInfo *)0x0);
            fVar2 = pVVar14->z;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pQVar21 = TypeInfo__UnityEngine__Quaternion->static_fields;
            fVar3 = (pQVar21->identityQuaternion).x;
            fVar11 = (pQVar21->identityQuaternion).y;
            fVar22 = (pQVar21->identityQuaternion).z;
            fVar23 = (pQVar21->identityQuaternion).w;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            uVar12 = SUB42(RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                           ,0);
            uVar13 = (undefined2)
                     ((uint)
                      RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                     >> 0x10);
            position_00.y = fVar22;
            position_00.x = fVar11;
            position_00.z = fVar2;
            rotation.y = fVar11;
            rotation.x = fVar3;
            rotation.z = fVar22;
            rotation.w = fVar23;
            pOVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                                ((Object *)original,position_00,rotation,
                                 RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                                );
            if (pOVar24 != (Object *)0x0) {
              *(ulonglong *)&pOVar24[1].monitor = CONCAT44(pSVar6,CONCAT22(uVar13,uVar12));
              pOVar25 = _UNK_?;
              pMVar26 = _UNK_?;
              pOVar27 = _UNK_?;
              pMVar28 = _UNK_?;
              pOVar24[2].monitor = (MonitorData *)pPVar7;
              pOVar24[3].monitor = pMVar28;
              pOVar24[4].klass = pOVar27;
              pOVar24[4].monitor = pMVar26;
              pOVar24[5].klass = pOVar25;
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
    unaff_ESI = (PickupItemModelGun *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (newState,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_ESI == (PickupItemModelGun *)0x0) goto code_?;
    if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).
         typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                        (Object *)StringLiteral_material,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
      puVar2 = (uint8_t *)func_?();
      (this->fields).material = *puVar2;
      this_00 = (CubeBullet *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_GetComponentInChildren_1
                          ((Component *)this,
                           CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                          );
      unaff_ESI = this;
      if (this_00 != (CubeBullet *)0x0) {
        CubeBullet::CubeBullet_SetCubeMaterial(this_00,(this->fields).material,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnUnequip
               (PickupItemModelGun *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  iVar1 = (*(this->klass->vtable).GetAmmoMultiplier.methodPtr)
                    (this,(this->fields).ammo,(this->klass->vtable).GetAmmoMultiplier.method);
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
      if (((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <= (pMVar3->_1).typeHierarchyDepth) &&
         ((MVAvatarLocal__Class *)
          (pMVar3->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] ==
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
      value = (Object *)func_?(TypeInfo__PickupItemModelGun___DoAutoFire_d__39);
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EDI);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?(value + 2,this);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (pAVar2,(MethodInfo *)0x0);
    }
  }
  cVar3 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)();
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
  cVar3 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                    (this,(this->klass->vtable).get_IsAmmoDepleted.method);
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
  cVar1 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar1 == '\0';
}

