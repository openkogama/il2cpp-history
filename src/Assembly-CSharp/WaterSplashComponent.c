
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
  pIVar2 = obj->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IMovable) {
        ppMVar5 = &(&(obj->klass->vtable).get_Bounds)[obj->klass->interfaceOffsets[uVar3].offset].
                    method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(obj,TypeInfo__IMovable,1);
code_?:
  pfVar6 = (float *)(*(code *)*ppMVar5)(auStack_7,obj,ppMVar5[1]);
  fVar8 = pfVar6[1];
  fVar9 = pfVar6[2];
  fVar10 = pfVar6[3];
  fVar11 = pfVar6[4];
  fVar12 = pfVar6[5];
  (this->fields).bounds.m_Center.x = *pfVar6;
  (this->fields).bounds.m_Center.y = fVar8;
  (this->fields).bounds.m_Center.z = fVar9;
  (this->fields).bounds.m_Extents.x = fVar10;
  (this->fields).bounds.m_Extents.y = fVar11;
  (this->fields).bounds.m_Extents.z = fVar12;
  fStack_13 = (this->fields).bounds.m_Center.z;
  uStack_14._0_4_ = (this->fields).bounds.m_Center.x;
  uStack_14._4_4_ = (this->fields).bounds.m_Center.y;
  puVar15 = (undefined8 *)func_?(auStack_16,2,TypeInfo__IMovable,obj);
  uVar17 = *puVar15;
  uStack_18._0_4_ = (float)uVar17;
  uStack_18._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
  fStack_19 = fStack_13 - *(float *)(puVar15 + 1);
  (this->fields).offset.x = (float)uStack_14 - (float)uStack_18;
  (this->fields).offset.y = uStack_14._4_4_ - uStack_18._4_4_;
  (this->fields).offset.z = fStack_19;
  uStack_18 = uVar17;
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
      uStack_9._0_4_ = (float)uVar6;
      uStack_9._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      fStack_10 = (this->fields).offset.z;
      fStack_11 = fStack_10 + *(float *)(puVar4 + 1);
      (this->fields).bounds.m_Center.x = (float)uStack_9 + (float)uVar7;
      (this->fields).bounds.m_Center.y = uStack_9._4_4_ + (float)uVar8;
      (this->fields).bounds.m_Center.z = fStack_11;
      uStack_9 = uVar6;
      fStack_5 = (float)uVar7;
      fStack_12 = (float)uVar8;
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

