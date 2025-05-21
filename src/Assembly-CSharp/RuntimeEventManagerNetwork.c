
/* Void DeserializeRuntimeEvents(BytePacker) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::
     RuntimeEventManagerNetwork_DeserializeRuntimeEvents
               (RuntimeEventManagerNetwork *this,BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker == (BytePacker *)0x0) {
code_?:
    func_?();
    pSVar1 = extraout_EDX;
code_?:
    func_?(unaff_ESI,pSVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (bytePacker,(MethodInfo *)0x0);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      unaff_ESI = (SingleCubeFineGrainedEvent *)
                  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                  RuntimeEvent_Create(bytePacker,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
        func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
        cRam_? = '\x01';
      }
      if (unaff_ESI == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
      in_stack_5 =
           (SingleCubeFineGrainedEvent *)
           CONCAT31((int3)((uint)in_stack_5 >> 8),
                    (unaff_ESI->fields)._._RuntimeEventType_k__BackingField);
      pRVar6 = (RuntimeEventManagerNetwork *)0x0;
      RVar7 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
              RuntimeEvent_GetRuntimeEventObjectType
                        ((RuntimeEventType__Enum)in_stack_5,(MethodInfo *)0x0);
      if ((char)RVar7 == '\x01') {
        pSVar1 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
        if (((unaff_ESI->klass->_1).naturalAligment <
             (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
             naturalAligment) ||
           ((unaff_ESI->klass->_1).typeHierarchy
            [(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
        goto code_?;
        pRVar6 = this;
        RuntimeEventManager::RuntimeEventManager_HandleEvent
                  ((RuntimeEventManager *)this,unaff_ESI,(MethodInfo *)0x0);
        in_stack_5 = unaff_ESI;
      }
      else if ((char)RVar7 == '\x02') {
        pSVar1 = (SingleCubeFineGrainedEvent__Class *)
                 TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
        if (((unaff_ESI->klass->_1).naturalAligment <
             (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment) ||
           ((unaff_ESI->klass->_1).typeHierarchy
            [(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent))
        goto code_?;
        pRVar6 = this;
        RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                  ((RuntimeEventManager *)this,(ExplosionEvent *)unaff_ESI,(MethodInfo *)0x0);
        in_stack_5 = unaff_ESI;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)pRVar6);
  }
  (this->fields)._.doEffects = 1;
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
      pSVar2 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
      if (((singleCubeFineGrainedEvent->klass->_1).naturalAligment <
           (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
           naturalAligment) ||
         ((singleCubeFineGrainedEvent->klass->_1).typeHierarchy
          [(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
           naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
      goto code_?;
      RuntimeEventManager::RuntimeEventManager_HandleEvent
                ((RuntimeEventManager *)this,
                 (SingleCubeFineGrainedEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
    }
    else if ((char)RVar1 == '\x02') {
      pSVar2 = (SingleCubeFineGrainedEvent__Class *)
               TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
      if (((TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment <=
           (singleCubeFineGrainedEvent->klass->_1).naturalAligment) &&
         ((singleCubeFineGrainedEvent->klass->_1).typeHierarchy
          [(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment - 1] ==
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
  pSVar2 = extraout_EDX;
code_?:
  func_?(singleCubeFineGrainedEvent,pSVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  (value->fields).accumulatedCubeDamages =
       (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
        *)this_00;
  func_?(pMVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)value,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1
             ,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)&(this->fields)._.localAccumulatedCubeDamages;
  (this->fields)._.localAccumulatedCubeDamages = value;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  (this->fields)._.cubeModelPrototypeTerrain = cubeModelPrototypeTerrain;
  func_?(&this->fields,cubeModelPrototypeTerrain);
  (this->fields)._.cubeModelFineGrainedTerrain = cubeModelFineGrainedTerrain;
  func_?(&(this->fields)._.cubeModelFineGrainedTerrain,cubeModelFineGrainedTerrain);
  return;
}

