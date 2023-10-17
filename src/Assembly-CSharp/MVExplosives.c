
/* Void Explode() */

void Assembly-CSharp.dll::MVExplosives::MVExplosives_Explode(MVExplosives *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      VStack_5.y = pVVar3->x;
      VStack_5.z = pVVar3->y;
      fVar6 = pVVar3->z;
      this_00 = (ExplosionEvent *)
                func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      if (this_00 != (ExplosionEvent *)0x0) {
        worldPosition.z = fVar6;
        worldPosition.x = VStack_5.y;
        worldPosition.y = VStack_5.z;
        MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_3
                  (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar7 != (PrefabPool *)0x0) {
          particlePrefab = (pPVar7->fields).particleExplosion;
          pGVar1 = (this->fields)._._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_5,pTVar2,(MethodInfo *)0x0);
              VStack_4.y = pVVar3->x;
              VStack_4.z = pVVar3->y;
              fStack_8 = (this->fields).damageValue;
              fStack_9 = (this->fields).damageRadius;
              fVar6 = (this->fields).shockwaveAcceleration;
              VStack_5.z = pVVar3->z;
              this_01 = (HashSet_1_UnityEngine_Vector3_ *)
                        func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
              if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
                System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
                HashSet_1_UnityEngine_Vector3___ctor
                          (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                          );
                if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
                }
                position.z = VStack_5.z;
                position.x = VStack_4.y;
                position.y = VStack_4.z;
                SharedWorldObjectGameplayFunctions+Explosion::
                SharedWorldObjectGameplayFunctions_Explosion_Explode
                          (particlePrefab,position,fStack_8,fStack_9,fVar6,1,this_00,
                           (HashSet_1_System_Int32_ *)this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVExplosives::MVExplosives_Initialize
               (MVExplosives *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__MVExplosivesObject);
    func_?(&
                    MethodInfo__MVExplosives__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pOVar1 = (this->fields)._._.component;
  pMVar2 = TypeInfo__MVExplosivesObject;
  if (pOVar1 != (ObjectPrefab *)0x0) {
    if (((pOVar1->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVExplosivesObject->_1).typeHierarchyDepth) ||
       ((pOVar1->klass->_1).typeHierarchy[(TypeInfo__MVExplosivesObject->_1).typeHierarchyDepth - 1]
        != (Il2CppClass *)TypeInfo__MVExplosivesObject)) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(GameObject *)pOVar1[1].klass,2.0,(MethodInfo *)0x0);
    this_00 = (Action_2_Int32Enum_Object_ *)
              func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    pMVar2 = (MVExplosivesObject__Class *)0x0;
    if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
      mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVExplosives__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 ,(MethodInfo *)0x0);
      pIVar3 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                         ((MVWorldObject *)this,0,
                          (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                          (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0)
      ;
      (this->fields)._InputSignalReceiver_k__BackingField = pIVar3;
      func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar3);
      return;
    }
  }
  func_?();
  pOVar1 = extraout_EDX;
code_?:
  func_?(pOVar1,pMVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVExplosives::MVExplosives_InputStateUpdateCallback
               (MVExplosives *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState != LogicInputState__Enum_FromColdToHot) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    VStack_5.y = pVVar3->x;
    VStack_5.z = pVVar3->y;
    fVar6 = pVVar3->z;
    this_00 = (ExplosionEvent *)
              func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    if (this_00 != (ExplosionEvent *)0x0) {
      worldPosition.z = fVar6;
      worldPosition.x = VStack_5.y;
      worldPosition.y = VStack_5.z;
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_3
                (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar7 != (PrefabPool *)0x0) {
        particlePrefab = (pPVar7->fields).particleExplosion;
        pGVar1 = (this->fields)._._.gameObject;
        if ((pGVar1 != (GameObject *)0x0) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_5,pTVar2,(MethodInfo *)0x0);
          VStack_4.y = pVVar3->x;
          VStack_4.z = pVVar3->y;
          fStack_8 = (this->fields).damageValue;
          fStack_9 = (this->fields).damageRadius;
          fVar6 = (this->fields).shockwaveAcceleration;
          VStack_5.z = pVVar3->z;
          this_01 = (HashSet_1_UnityEngine_Vector3_ *)
                    func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
          if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
            HashSet_1_UnityEngine_Vector3___ctor
                      (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
            }
            position.z = VStack_5.z;
            position.x = VStack_4.y;
            position.y = VStack_4.z;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (particlePrefab,position,fStack_8,fStack_9,fVar6,1,this_00,
                       (HashSet_1_System_Int32_ *)this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVExplosives(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVExplosives::MVExplosives__ctor
               (MVExplosives *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).damageRadius = 10.0;
  (this->fields).damageValue = 150.0;
  (this->fields).shockwaveAcceleration = 3500.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvExplosivesPrefab,worldObjects,
               (MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar2;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVExplosives::MVExplosives_get_DocumentationType
          (MVExplosives *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Explosives;
}

