
/* Void DeserializeRuntimeEvents(BytePacker) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::
     RuntimeEventManagerNetwork_DeserializeRuntimeEvents
               (RuntimeEventManagerNetwork *this,BytePacker *bytePacker,MethodInfo *method)

{
  singleCubeFineGrainedEvent = (SingleCubeFineGrainedEvent *)0x0;
  if (bytePacker != (BytePacker *)0x0) {
    iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (bytePacker,(MethodInfo *)0x0);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        singleCubeFineGrainedEvent =
             (SingleCubeFineGrainedEvent *)
             MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::RuntimeEvent_Create
                       (bytePacker,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
          cRam_? = '\x01';
        }
        if (singleCubeFineGrainedEvent == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
        in_stack_3 =
             (SingleCubeFineGrainedEvent *)
             CONCAT31((int3)((uint)in_stack_3 >> 8),
                      (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField);
        pRVar4 = (RuntimeEventManagerNetwork *)0x0;
        RVar5 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                RuntimeEvent_GetRuntimeEventObjectType
                          ((RuntimeEventType__Enum)in_stack_3,(MethodInfo *)0x0);
        if ((char)RVar5 == '\x01') {
          bVar6 = (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
                  naturalAligment;
          pSVar7 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
          if (((singleCubeFineGrainedEvent->klass->_1).naturalAligment < bVar6) ||
             ((singleCubeFineGrainedEvent->klass->_1).typeHierarchy[bVar6 - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
          goto code_?;
          pRVar4 = this;
          RuntimeEventManager::RuntimeEventManager_HandleEvent
                    ((RuntimeEventManager *)this,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
          in_stack_3 = singleCubeFineGrainedEvent;
        }
        else if ((char)RVar5 == '\x02') {
          bVar6 = (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment;
          pSVar7 = (SingleCubeFineGrainedEvent__Class *)
                   TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
          if (((singleCubeFineGrainedEvent->klass->_1).naturalAligment < bVar6) ||
             ((singleCubeFineGrainedEvent->klass->_1).typeHierarchy[bVar6 - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent))
          goto code_?;
          pRVar4 = this;
          RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                    ((RuntimeEventManager *)this,(ExplosionEvent *)singleCubeFineGrainedEvent,
                     (MethodInfo *)0x0);
          in_stack_3 = singleCubeFineGrainedEvent;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)pRVar4);
    }
    (this->fields)._.doEffects = 1;
    return;
  }
code_?:
  func_?();
  pSVar7 = extraout_EDX;
code_?:
  func_?(singleCubeFineGrainedEvent,pSVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleRuntimeEvent(RuntimeEvent) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
               (RuntimeEventManagerNetwork *this,RuntimeEvent *runtimeEvent,MethodInfo *method)

{
  singleCubeFineGrainedEvent = runtimeEvent;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  if (runtimeEvent != (RuntimeEvent *)0x0) {
    runtimeEvent = (RuntimeEvent *)
                   CONCAT31(runtimeEvent._1_3_,
                            (runtimeEvent->fields)._RuntimeEventType_k__BackingField);
    RVar1 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
            RuntimeEvent_GetRuntimeEventObjectType
                      ((RuntimeEventType__Enum)runtimeEvent,(MethodInfo *)0x0);
    if ((char)RVar1 == '\x01') {
      bVar2 = (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
              naturalAligment;
      pSVar3 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
      if (((singleCubeFineGrainedEvent->klass->_1).naturalAligment < bVar2) ||
         ((singleCubeFineGrainedEvent->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
      goto code_?;
      RuntimeEventManager::RuntimeEventManager_HandleEvent
                ((RuntimeEventManager *)this,
                 (SingleCubeFineGrainedEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
    }
    else if ((char)RVar1 == '\x02') {
      bVar2 = (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment;
      pSVar3 = (SingleCubeFineGrainedEvent__Class *)
               TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
      if ((bVar2 <= (singleCubeFineGrainedEvent->klass->_1).naturalAligment) &&
         ((singleCubeFineGrainedEvent->klass->_1).typeHierarchy[bVar2 - 1] ==
          (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)) {
        RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                  ((RuntimeEventManager *)this,(ExplosionEvent *)singleCubeFineGrainedEvent,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    return;
  }
  func_?();
  pSVar3 = extraout_EDX;
code_?:
  func_?(singleCubeFineGrainedEvent,pSVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* RuntimeEventManagerNetwork(MVCubeModelPrototypeTerrain, MVCubeModelFineGrainedTerrain) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
               (RuntimeEventManagerNetwork *this,
               MVCubeModelPrototypeTerrain *cubeModelPrototypeTerrain,
               MVCubeModelFineGrainedTerrain *cubeModelFineGrainedTerrain,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
    cRam_? = '\x01';
  }
  value = (RuntimeEventManager_AccumulatedCubeDamages *)
          func_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  pMVar1 = (MethodInfo *)&value->fields;
  ((RuntimeEventManager_AccumulatedCubeDamages__Fields *)pMVar1)->accumulatedCubeDamages =
       (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
        *)this_00;
  func_?(pMVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)value,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1
             ,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)&(this->fields)._.localAccumulatedCubeDamages;
  *(RuntimeEventManager_AccumulatedCubeDamages **)pMVar1 = value;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  (this->fields)._.cubeModelPrototypeTerrain = cubeModelPrototypeTerrain;
  func_?(&this->fields,cubeModelPrototypeTerrain);
  ppMVar2 = &(this->fields)._.cubeModelFineGrainedTerrain;
  *ppMVar2 = cubeModelFineGrainedTerrain;
  func_?(ppMVar2,cubeModelFineGrainedTerrain);
  return;
}

