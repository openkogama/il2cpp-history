
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Initialize
               (WaterSplashComponent *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IMovable);
    cRam_? = '\x01';
  }
  (this->fields).movingObject = obj;
  func_?(&(this->fields).movingObject,obj);
  if (obj == (IMovable *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  uVar3 = (obj->klass->_1).interface_offsets_count;
  if (uVar3 != 0) {
    do {
      if (obj->klass->interfaceOffsets[uVar2].interfaceType == (Il2CppClass *)TypeInfo__IMovable) {
        pVVar4 = &(obj->klass->vtable).get_Bounds + obj->klass->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  pVVar4 = (VirtualInvokeData *)func_?(obj,TypeInfo__IMovable,1);
code_?:
  pfVar5 = (float *)(*pVVar4->methodPtr)(auStack_6,obj,pVVar4->method);
  fVar7 = pfVar5[1];
  fVar8 = pfVar5[2];
  fVar9 = pfVar5[3];
  fVar10 = pfVar5[4];
  fVar11 = pfVar5[5];
  (this->fields).bounds.m_Center.x = *pfVar5;
  (this->fields).bounds.m_Center.y = fVar7;
  (this->fields).bounds.m_Center.z = fVar8;
  (this->fields).bounds.m_Extents.x = fVar9;
  (this->fields).bounds.m_Extents.y = fVar10;
  (this->fields).bounds.m_Extents.z = fVar11;
  pRVar12 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                      (&RStack_13,
                       (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&(this->fields).bounds,(MethodInfo *)0x0);
  uStack_14._0_4_ = (float)pRVar12->_options;
  uStack_14._4_4_ = (float)pRVar12->_cultureKey;
  pSStack_15 = pRVar12->_pattern;
  puVar16 = (undefined8 *)func_?(auStack_17,2,TypeInfo__IMovable,obj);
  RStack_13._0_8_ = *puVar16;
  RStack_13._pattern = (String *)((float)pSStack_15 - *(float *)(puVar16 + 1));
  (this->fields).offset.x = (float)uStack_14 - (float)RStack_13._options;
  (this->fields).offset.y = uStack_14._4_4_ - (float)RStack_13._cultureKey;
  (this->fields).offset.z = (float)RStack_13._pattern;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Start
               (WaterSplashComponent *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Edit) {
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if ((pWVar2 == (WaterPlaneManager *)0x0) ||
       (this_00 = (pWVar2->fields).water, this_00 == (Water *)0x0)) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 == (GameObject *)0x0) goto code_?;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
  }
  pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if ((pWVar2 != (WaterPlaneManager *)0x0) &&
     ((pWVar2->fields).splashController != (SplashController *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__SplashController);
      cRam_? = '\x01';
    }
    if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SplashController);
    }
    TypeInfo__SplashController->static_fields->currentObjectID =
         TypeInfo__SplashController->static_fields->currentObjectID + 1;
    (this->fields).waterObjectID = TypeInfo__SplashController->static_fields->currentObjectID;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Update
               (WaterSplashComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IMovable);
    cRam_? = '\x01';
  }
  pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (((pWVar1 != (WaterPlaneManager *)0x0) &&
      (this_00 = (pWVar1->fields).water, this_00 != (Water *)0x0)) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0)) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pIVar3 = (this->fields).movingObject;
    if (pIVar3 != (IMovable *)0x0) {
      puVar4 = (undefined8 *)func_?(&fStack_5,2,TypeInfo__IMovable,pIVar3);
      uVar6 = *puVar4;
      uVar7 = (this->fields).offset.x;
      uVar8 = (this->fields).offset.y;
      uStack_9._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      fStack_10 = (this->fields).offset.z;
      uStack_9._0_4_ = (float)uVar6;
      fStack_11 = fStack_10 + *(float *)(puVar4 + 1);
      value.y = uStack_9._4_4_ + (float)uVar8;
      value.x = (float)uVar7 + (float)uStack_9;
      value.z = fStack_11;
      uStack_9 = uVar6;
      fStack_5 = (float)uVar7;
      fStack_12 = (float)uVar8;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
      ParticleSystem_Particle_set_position
                ((ParticleSystem_Particle *)&(this->fields).bounds,value,(MethodInfo *)0x0);
      pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (pWVar1 != (WaterPlaneManager *)0x0) {
        fVar13 = (this->fields).bounds.m_Extents.x;
        this_01 = (pWVar1->fields).splashController;
        pIVar3 = (this->fields).movingObject;
        uVar14 = (this->fields).bounds.m_Extents.y;
        uVar15 = (this->fields).bounds.m_Extents.z;
        fStack_12 = (float)uVar14;
        fStack_10 = (float)uVar15;
        if (pIVar3 != (IMovable *)0x0) {
          uVar16 = 0;
          pVVar17 = (Vector3 *)func_?(&uStack_9,0,TypeInfo__IMovable,pIVar3);
          if (this_01 != (SplashController *)0x0) {
            objectID = (this->fields).waterObjectID;
            bounds.m_Center.y = (float)objectID;
            bounds.m_Center.x = (float)uVar16;
            bounds.m_Center.z = 0.0;
            bounds.m_Extents.x = fVar13;
            bounds.m_Extents.y = fStack_12;
            bounds.m_Extents.z = fStack_10;
            SplashController::SplashController_WaterSplash
                      (this_01,bounds,*pVVar17,objectID,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

