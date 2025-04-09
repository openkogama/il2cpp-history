
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Initialize
               (WaterSplashComponent *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IMovable);
    cRam_? = '\x01';
  }
  ppIVar1 = &(this->fields).movingObject;
  *ppIVar1 = obj;
  func_?(ppIVar1,obj);
  if (obj == (IMovable *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = obj->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType == (Il2CppClass *)TypeInfo__IMovable) {
        ppMVar6 = &(&(obj->klass->vtable).get_Bounds)[pIVar3->interfaceOffsets[uVar4].offset].
                    method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)func_?(obj,TypeInfo__IMovable,1);
code_?:
  pfVar7 = (float *)(*(code *)*ppMVar6)(auStack_8,obj,ppMVar6[1]);
  fVar9 = pfVar7[1];
  fVar10 = pfVar7[2];
  fVar11 = pfVar7[3];
  fVar12 = pfVar7[4];
  fVar13 = pfVar7[5];
  (this->fields).bounds.m_Center.x = *pfVar7;
  (this->fields).bounds.m_Center.y = fVar9;
  (this->fields).bounds.m_Center.z = fVar10;
  (this->fields).bounds.m_Extents.x = fVar11;
  (this->fields).bounds.m_Extents.y = fVar12;
  (this->fields).bounds.m_Extents.z = fVar13;
  fStack_14 = (this->fields).bounds.m_Center.z;
  uStack_15._0_4_ = (this->fields).bounds.m_Center.x;
  uStack_15._4_4_ = (this->fields).bounds.m_Center.y;
  puVar16 = (undefined8 *)func_?(auStack_17,2,TypeInfo__IMovable,obj);
  uVar18 = *puVar16;
  uStack_19._0_4_ = (float)uVar18;
  uStack_19._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
  fStack_20 = fStack_14 - *(float *)(puVar16 + 1);
  (this->fields).offset.x = (float)uStack_15 - (float)uStack_19;
  (this->fields).offset.y = uStack_15._4_4_ - uStack_19._4_4_;
  (this->fields).offset.z = fStack_20;
  uStack_19 = uVar18;
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

