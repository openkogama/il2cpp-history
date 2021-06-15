
/* Void DeserializeRuntimeEvents(BytePacker) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::
     RuntimeEventManagerNetwork_DeserializeRuntimeEvents
               (RuntimeEventManagerNetwork *this,BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker != (BytePacker *)0x0) {
    iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (bytePacker,(MethodInfo *)0x0);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        this_00 = (SingleCubeFineGrainedEvent *)
                  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                  RuntimeEvent_Create(bytePacker,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if (this_00 == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
        RVar3 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                RuntimeEvent_get_RuntimeEventType((RuntimeEvent *)this_00,(MethodInfo *)0x0);
        puStack_4 = (undefined *)CONCAT31(puStack_4._1_3_,(char)RVar3);
        iVar5 = 0;
        RVar6 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                RuntimeEvent_GetRuntimeEventObjectType
                          ((RuntimeEventType__Enum)puStack_4,(MethodInfo *)0x0);
        if ((char)RVar6 == '\x01') {
          bVar7 = (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
                  naturalAligment;
          if (((((RuntimeEvent__Class *)this_00->klass)->_1).naturalAligment < bVar7) ||
             ((((RuntimeEvent__Class *)this_00->klass)->_1).typeHierarchy[bVar7 - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
          {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          pSVar9 = (SingleCubeFineGrainedEvent *)0x0;
          if (bVar8) {
            pSVar9 = this_00;
          }
          if (pSVar9 == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
          RuntimeEventManager::RuntimeEventManager_HandleEvent
                    ((RuntimeEventManager *)this,pSVar9,(MethodInfo *)0x0);
        }
        else if ((char)RVar6 == '\x02') {
          bVar7 = (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment;
          if (((((RuntimeEvent__Class *)this_00->klass)->_1).naturalAligment < bVar7) ||
             ((((RuntimeEvent__Class *)this_00->klass)->_1).typeHierarchy[bVar7 - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          pSVar9 = (SingleCubeFineGrainedEvent *)0x0;
          if (bVar8) {
            pSVar9 = this_00;
          }
          if (pSVar9 == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
          RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                    ((RuntimeEventManager *)this,(ExplosionEvent *)pSVar9,(MethodInfo *)0x0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar5);
    }
    (this->fields)._.doEffects = 1;
    return;
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HandleRuntimeEvent(RuntimeEvent) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
               (RuntimeEventManagerNetwork *this,RuntimeEvent *runtimeEvent,MethodInfo *method)

{
  pRVar1 = runtimeEvent;
  uVar2 = (undefined2)((uint)in_stack_3 >> 0x10);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (runtimeEvent == (RuntimeEvent *)0x0) {
    func_?();
  }
  else {
    RVar4 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
            RuntimeEvent_get_RuntimeEventType(runtimeEvent,(MethodInfo *)0x0);
    runtimeEvent = (RuntimeEvent *)CONCAT31(runtimeEvent._1_3_,(char)RVar4);
    RVar5 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
             RuntimeEvent_GetRuntimeEventObjectType
                       (CONCAT22((short)((uint)pRVar1 >> 0x10),(short)runtimeEvent),
                        (MethodInfo *)0x0);
    if ((char)RVar5 != '\x01') {
      if ((char)RVar5 == '\x02') {
        explosion = (ExplosionEvent *)func_?();
        RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                  ((RuntimeEventManager *)0x0,explosion,(MethodInfo *)0x0);
      }
      return;
    }
    bVar6 = (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
            naturalAligment;
    if (((pRVar1->klass->_1).naturalAligment < bVar6) ||
       ((pRVar1->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pRVar8 = (RuntimeEvent *)0x0;
    if (bVar7) {
      pRVar8 = pRVar1;
    }
    if (pRVar8 != (RuntimeEvent *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (in_stack_9 != (MethodInfo *)0x0) {
        RVar4 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                RuntimeEvent_get_RuntimeEventType
                          ((RuntimeEvent *)in_stack_9,(MethodInfo *)0x0);
        if ((char)RVar4 == '\x01') {
          piVar10 = *(int **)(in_stack_11 + 0xc);
          IVar12 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                             ((CellCursorCubeMesh *)&stack0xfffffff4,in_stack_9);
          uVar13 = *IVar12._0_4_;
          uVar2 = *(undefined2 *)(IVar12._0_4_ + 1);
          bVar14 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
                  CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                            ((CrossPlatformInputManager_VirtualAxis *)in_stack_9,
                             (MethodInfo *)0x0);
          pCVar15 = (CubeBase *)func_?(TypeInfo__MV__WorldObject__CubeBase);
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_2
                    (pCVar15,bVar14,(MethodInfo *)0x0);
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 0x3c8))
                      (piVar10,uVar13,uVar2,pCVar15,*(undefined4 *)(*piVar10 + 0x3cc));
            return;
          }
        }
        else {
          RVar4 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                  RuntimeEvent_get_RuntimeEventType
                            ((RuntimeEvent *)in_stack_9,(MethodInfo *)0x0);
          if (((char)RVar4 != '\x02') &&
             (RVar4 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                      RuntimeEvent_get_RuntimeEventType
                                ((RuntimeEvent *)in_stack_9,(MethodInfo *)0x0),
             (char)RVar4 != '\x05')) {
            return;
          }
          IVar12 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                             ((CellCursorCubeMesh *)&stack0xfffffff4,in_stack_9);
          pIVar16 = IVar12._0_4_;
          iVar17 = pIVar16->x;
          fineGrainedTerrainWorldObject = *(ICubeModel **)(in_stack_11 + 8);
          iVar18 = pIVar16->z;
          method_00 = *(MethodInfo **)(in_stack_11 + 0xc);
          bVar14 = RemoveCubes+RemoveOneCube::
                  RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                            (*pIVar16,(ICubeModel *)method_00,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            IVar12.z = iVar17;
            IVar12._0_4_ = &stack0xfffffff4;
            IVar12 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                     CubeMathFunctions_FromLocalPosToLocalPos
                               (IVar12,(ICubeModel *)CONCAT22(uVar2,iVar18),
                                fineGrainedTerrainWorldObject,method_00);
            puVar19 = IVar12._0_4_;
            uVar13 = *puVar19;
            uVar2 = *(undefined2 *)(puVar19 + 1);
            if (fineGrainedTerrainWorldObject == (ICubeModel *)0x0) goto code_?;
            pCVar15 = (CubeBase *)
                      func_?(1,TypeInfo__MV__WorldObject__ICubeModel,
                                      fineGrainedTerrainWorldObject,(short)*puVar19);
            uVar20 = SUB41(pCVar15,0);
            uVar21 = (undefined1)((uint)pCVar15 >> 8);
            uVar22 = (undefined2)((uint)pCVar15 >> 0x10);
            if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
              func_?();
              pCVar15 = (CubeBase *)CONCAT22(uVar22,CONCAT11(uVar21,uVar20));
            }
            bVar14 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                              (pCVar15,(CubeBase *)0x0,(MethodInfo *)0x0);
            if (bVar14 == 0) {
              return;
            }
            if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
              func_?();
            }
            fromPos.z._0_1_ = (char)uVar2;
            fromPos.x = (short)uVar13;
            fromPos.y = (short)((uint)uVar13 >> 0x10);
            fromPos.z._1_1_ = (char)((ushort)uVar2 >> 8);
            MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
                      (fineGrainedTerrainWorldObject,(ICubeModel *)method_00,fromPos,
                       (MethodInfo *)0x0);
            fineGrainedTerrainWorldObject_00 = TypeInfo__MV__WorldObject__ICubeModel;
            puVar23 = &UNK_?;
            func_?();
            fineGrainedPosition.z = (int16_t)((uint)fineGrainedTerrainWorldObject >> 0x10);
            fineGrainedPosition._0_4_ = puVar23;
            RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                      (fineGrainedPosition,(ICubeModel *)fineGrainedTerrainWorldObject_00,
                       (MethodInfo *)0x0);
          }
          if (*(char *)(in_stack_11 + 0x14) == '\0') {
            return;
          }
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?(TypeInfo__PrefabPool);
          }
          this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (this_00 != (PrefabPool *)0x0) {
            particlePrefab =
                 PrefabPool::PrefabPool_get_ParticleCubeDustDestroyed(this_00,(MethodInfo *)0x0);
            IVar12 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                               ((CellCursorCubeMesh *)&stack0xfffffff4,in_stack_9);
            pVVar24 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                      CubeMathFunctions_FineGrainedLocalPosToWorldPos
                                ((Vector3 *)&stack0xfffffff0,*IVar12._0_4_,(MethodInfo *)0x0);
            position.z._1_1_ = (char)((uint)pVVar24->z >> 8);
            position._0_9_ = *(unkbyte9 *)pVVar24;
            position.z._2_2_ = (short)((uint)pVVar24->z >> 0x10);
            SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                      (particlePrefab,position,1.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?(0);
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* RuntimeEventManagerNetwork(MVCubeModelPrototypeTerrain, MVCubeModelFineGrainedTerrain) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
               (RuntimeEventManagerNetwork *this,
               MVCubeModelPrototypeTerrain *cubeModelPrototypeTerrain,
               MVCubeModelFineGrainedTerrain *cubeModelFineGrainedTerrain,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
  ;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this_00,UpdatePriority__Enum_UPDATEBUCKET_STANDARD
             ,1,(MethodInfo *)0x0);
  (this->fields)._.localAccumulatedCubeDamages =
       (RuntimeEventManager_AccumulatedCubeDamages *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,(MethodInfo *)this);
  (this->fields)._.cubeModelPrototypeTerrain = cubeModelPrototypeTerrain;
  (this->fields)._.cubeModelFineGrainedTerrain = cubeModelFineGrainedTerrain;
  return;
}

