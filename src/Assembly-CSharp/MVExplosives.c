
/* Void Explode() */

void Assembly-CSharp.dll::MVExplosives::MVExplosives_Explode(MVExplosives *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&VStack_3);
    explosionEvent =
         (ExplosionEvent *)FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    aVStack_7[0].z = VStack_3.z;
    (explosionEvent->fields)._._RuntimeEventType_k__BackingField = 3;
    aVStack_7[0].x = VStack_3.x;
    aVStack_7[0].y = VStack_3.y;
    pIVar8 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_WorldPosToFineGrainedLocalPos
                       (&IStackX_8,aVStack_7,(MethodInfo *)0x0);
    bVar9 = cRam_? == '\0';
    iVar10 = pIVar8->y;
    iVar11 = pIVar8->z;
    (explosionEvent->fields)._.position.x = pIVar8->x;
    (explosionEvent->fields)._.position.y = iVar10;
    (explosionEvent->fields)._.position.z = iVar11;
    if (bVar9) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar12 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar12 != (PrefabPool *)0x0) {
      pGVar1 = (this->fields)._._.gameObject;
      particlePrefab = (pPVar12->fields).particleExplosion;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&VStack_3);
        damageValue = (this->fields).damageValue;
        damageRadius = (this->fields).damageRadius;
        shockwaveAcceleration = (this->fields).shockwaveAcceleration;
        ignoreIDs = (HashSet_1_System_Int32_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        FUN_?(ignoreIDs,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0)
        {
          FUN_?();
        }
        aVStack_7[0].z = VStack_3.z;
        aVStack_7[0].x = VStack_3.x;
        aVStack_7[0].y = VStack_3.y;
        SharedWorldObjectGameplayFunctions+Explosion::
        SharedWorldObjectGameplayFunctions_Explosion_Explode
                  (particlePrefab,aVStack_7,damageValue,damageRadius,shockwaveAcceleration,1,
                   explosionEvent,ignoreIDs,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVExplosives::MVExplosives_Initialize
               (MVExplosives *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVExplosivesObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVExplosives__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pOVar1 = (this->fields)._._.component;
  if (pOVar1 == (ObjectPrefab *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = (TypeInfo__MVExplosivesObject->_1).naturalAligment;
  if ((bVar3 <= (pOVar1->klass->_1).naturalAligment) &&
     ((pOVar1->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
      (Il2CppClass *)TypeInfo__MVExplosivesObject)) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(GameObject *)pOVar1[1].klass,
               TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
    this_00 = (Action_2_Int32Enum_Object_ *)
              FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVExplosives__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
               ,(MethodInfo *)0x0);
    pIVar4 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,0,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    return;
  }
  FUN_?(pOVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&VStack_3);
    explosionEvent =
         (ExplosionEvent *)FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    aVStack_7[0].z = VStack_3.z;
    (explosionEvent->fields)._._RuntimeEventType_k__BackingField = 3;
    aVStack_7[0].x = VStack_3.x;
    aVStack_7[0].y = VStack_3.y;
    pIVar8 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_WorldPosToFineGrainedLocalPos
                       (&IStackX_8,aVStack_7,(MethodInfo *)0x0);
    bVar9 = cRam_? == '\0';
    iVar10 = pIVar8->y;
    iVar11 = pIVar8->z;
    (explosionEvent->fields)._.position.x = pIVar8->x;
    (explosionEvent->fields)._.position.y = iVar10;
    (explosionEvent->fields)._.position.z = iVar11;
    if (bVar9) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar12 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar12 != (PrefabPool *)0x0) {
      pGVar1 = (this->fields)._._.gameObject;
      particlePrefab = (pPVar12->fields).particleExplosion;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&VStack_3);
        damageValue = (this->fields).damageValue;
        damageRadius = (this->fields).damageRadius;
        shockwaveAcceleration = (this->fields).shockwaveAcceleration;
        ignoreIDs = (HashSet_1_System_Int32_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        FUN_?(ignoreIDs,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0)
        {
          FUN_?();
        }
        aVStack_7[0].z = VStack_3.z;
        aVStack_7[0].x = VStack_3.x;
        aVStack_7[0].y = VStack_3.y;
        SharedWorldObjectGameplayFunctions+Explosion::
        SharedWorldObjectGameplayFunctions_Explosion_Explode
                  (particlePrefab,aVStack_7,damageValue,damageRadius,shockwaveAcceleration,1,
                   explosionEvent,ignoreIDs,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVExplosives(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVExplosives::MVExplosives__ctor
               (MVExplosives *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).damageRadius = 10.0;
  (this->fields).damageValue = 150.0;
  (this->fields).shockwaveAcceleration = 3500.0;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar2->fields).mvExplosivesPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *piVar3 = *piVar3 | 0x10000;
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

