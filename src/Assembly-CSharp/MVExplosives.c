
/* Void Explode() */

void Assembly-CSharp.dll::MVExplosives::MVExplosives_Explode(MVExplosives *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
      VStack_4.y = pVVar3->x;
      VStack_4.z = pVVar3->y;
      fVar5 = pVVar3->z;
      this_00 = (ExplosionEvent *)
                func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      worldPosition.z = fVar5;
      worldPosition.x = VStack_4.y;
      worldPosition.y = VStack_4.z;
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (this_01 != (PrefabPool *)0x0) {
        particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(this_01,(MethodInfo *)0x0);
        pGVar1 = (this->fields)._._.gameObject;
        if (pGVar1 != (GameObject *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_4,pTVar2,(MethodInfo *)0x0);
            uVar6 = pVVar3->y;
            fStack_7 = (this->fields).damageValue;
            fStack_8 = (this->fields).damageRadius;
            fVar5 = (this->fields).shockwaveAcceleration;
            VStack_4.z = pVVar3->z;
            this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                      func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
            if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0)) {
              func_?();
            }
            auVar9._4_4_ = VStack_4.z;
            auVar9._0_4_ = uVar6;
            auVar9._8_4_ = 0;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (particlePrefab,(Vector3)(auVar9 << 0x20),fStack_7,fStack_8,fVar5,1,this_00,
                       (HashSet_1_System_Int32_ *)this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVExplosives::MVExplosives_Initialize
               (MVExplosives *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pOVar1 = (this->fields)._._.component;
  if (pOVar1 == (ObjectPrefab *)0x0) {
    func_?(0);
    pOVar1 = extraout_ECX;
    pMVar2 = extraout_EDX;
  }
  else {
    pOVar3 = pOVar1->klass;
    bVar4 = (TypeInfo__MVExplosivesObject->_1).naturalAligment;
    if (((pOVar3->_1).naturalAligment < bVar4) ||
       (bVar5 = true,
       (pOVar3->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVExplosivesObject)) {
      bVar5 = false;
    }
    pOVar6 = (ObjectPrefab *)0x0;
    if (bVar5) {
      pOVar6 = pOVar1;
    }
    pMVar2 = TypeInfo__MVExplosivesObject;
    if (pOVar6 != (ObjectPrefab *)0x0) {
      if (((pOVar3->_1).naturalAligment < bVar4) ||
         ((pOVar3->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__MVExplosivesObject)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pOVar6 = (ObjectPrefab *)0x0;
      if (bVar5) {
        pOVar6 = pOVar1;
      }
      if (pOVar6 != (ObjectPrefab *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(GameObject *)pOVar6[1].klass,2.0,(MethodInfo *)0x0);
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVExplosives__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,
                   MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                  );
        pIVar7 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,0,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_00,
                            (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar7;
        return;
      }
    }
  }
  func_?(pOVar1,pMVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
    VStack_4.y = pVVar3->x;
    VStack_4.z = pVVar3->y;
    fVar5 = pVVar3->z;
    this_00 = (ExplosionEvent *)
              func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    worldPosition.z = fVar5;
    worldPosition.x = VStack_4.y;
    worldPosition.y = VStack_4.z;
    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
              (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(this_01,(MethodInfo *)0x0);
      pGVar1 = (this->fields)._._.gameObject;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_4,pTVar2,(MethodInfo *)0x0);
        uVar6 = pVVar3->y;
        fStack_7 = (this->fields).damageValue;
        fStack_8 = (this->fields).damageRadius;
        fVar5 = (this->fields).shockwaveAcceleration;
        VStack_4.z = pVVar3->z;
        this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                  func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0)) {
          func_?();
        }
        auVar9._4_4_ = VStack_4.z;
        auVar9._0_4_ = uVar6;
        auVar9._8_4_ = 0;
        SharedWorldObjectGameplayFunctions+Explosion::
        SharedWorldObjectGameplayFunctions_Explosion_Explode
                  (particlePrefab,(Vector3)(auVar9 << 0x20),fStack_7,fStack_8,fVar5,1,this_00,
                   (HashSet_1_System_Int32_ *)this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).damageRadius = 10.0;
  (this->fields).damageValue = 150.0;
  (this->fields).shockwaveAcceleration = 3500.0;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
                             ((DesktopEditModeController *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVExplosives::MVExplosives_get_DocumentationType
          (MVExplosives *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Explosives;
}

