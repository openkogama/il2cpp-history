
/* Void Initialize(IMovable) */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Initialize
               (WaterSplashComponent *this,IMovable *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).movingObject = obj;
  if (obj == (IMovable *)0x0) {
    func_?(0);
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
        ppMVar5 = &(&(obj->klass->vtable).get_Bounds)[pIVar2->interfaceOffsets[uVar3].offset].
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
  pBVar13 = &(this->fields).bounds;
  (pBVar13->m_Center).x = *pfVar6;
  (this->fields).bounds.m_Center.y = fVar8;
  (this->fields).bounds.m_Center.z = fVar9;
  (this->fields).bounds.m_Extents.x = fVar10;
  (this->fields).bounds.m_Extents.y = fVar11;
  (this->fields).bounds.m_Extents.z = fVar12;
  puVar14 = (undefined8 *)func_?(auStack_15,pBVar13,0);
  uStack_16 = *puVar14;
  fVar8 = *(float *)(puVar14 + 1);
  puVar14 = (undefined8 *)func_?(&VStack_17,2,TypeInfo__IMovable,obj);
  uStack_18 = *puVar14;
  fVar9 = *(float *)(puVar14 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar8;
  a.x = (float)(undefined4)uStack_16;
  a.y = (float)uStack_16._4_4_;
  b.z = fVar9;
  b.x = (float)(undefined4)uStack_18;
  b.y = (float)uStack_18._4_4_;
  pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      (&VStack_17,a,b,(MethodInfo *)0x0);
  fVar9 = pVVar19->y;
  fVar8 = pVVar19->z;
  (this->fields).offset.x = pVVar19->x;
  (this->fields).offset.y = fVar9;
  (this->fields).offset.z = fVar8;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Start
               (WaterSplashComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if ((pWVar2 == (WaterPlaneManager *)0x0) ||
       (this_00 = (pWVar2->fields).water, this_00 == (Water *)0x0)) goto code_?;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_02 == (GameObject *)0x0) goto code_?;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if ((pWVar2 != (WaterPlaneManager *)0x0) &&
     (this_01 = (pWVar2->fields).splashController, this_01 != (SplashController *)0x0)) {
    iVar4 = SplashController::SplashController_get_NewObjectID(this_01,(MethodInfo *)0x0);
    (this->fields).waterObjectID = iVar4;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WaterSplashComponent::WaterSplashComponent_Update
               (WaterSplashComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (((pWVar1 != (WaterPlaneManager *)0x0) &&
      (this_00 = (pWVar1->fields).water, this_00 != (Water *)0x0)) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0))
  {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pIVar3 = (this->fields).movingObject;
    if (pIVar3 != (IMovable *)0x0) {
      puVar4 = (undefined8 *)func_?(&VStack_5,2,TypeInfo__IMovable,pIVar3);
      uVar6._0_4_ = (this->fields).offset.x;
      uVar6._4_4_ = (this->fields).offset.y;
      uStack_7 = *puVar4;
      fVar8 = *(float *)(puVar4 + 1);
      fStack_9 = (this->fields).offset.z;
      VStack_5.y = (float)(undefined4)uVar6;
      VStack_5.z = (float)uVar6._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
        uVar6 = CONCAT44(VStack_5.z,VStack_5.y);
      }
      a.z = fVar8;
      a.x = (float)(undefined4)uStack_7;
      a.y = (float)uStack_7._4_4_;
      b.z = fStack_9;
      b.x = (float)(int)uVar6;
      b.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_5,a,b,(MethodInfo *)0x0);
      uVar11 = pVVar10->x;
      uVar12 = pVVar10->y;
      uStack_7 = (ulonglong)(uint)pVVar10->z;
      VStack_5.x = (float)&UNK_?;
      VStack_5.y = (float)&(this->fields).bounds;
      VStack_5.z = (float)uVar11;
      uStack_13 = uVar12;
      func_?();
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (pWVar1 != (WaterPlaneManager *)0x0) {
        fVar8 = (this->fields).bounds.m_Center.z;
        fVar14 = (this->fields).bounds.m_Extents.x;
        this_01 = (pWVar1->fields).splashController;
        pIVar3 = (this->fields).movingObject;
        uVar15 = (this->fields).bounds.m_Extents.y;
        uVar16 = (this->fields).bounds.m_Extents.z;
        VStack_5.y = (float)uVar15;
        VStack_5.z = (float)uVar16;
        if ((pIVar3 != (IMovable *)0x0) &&
           (pVVar10 = (Vector3 *)func_?(&uStack_13,0,TypeInfo__IMovable,pIVar3),
           this_01 != (SplashController *)0x0)) {
          objectID = (this->fields).waterObjectID;
          bounds.m_Center.y = 0.0;
          bounds.m_Center.x = (float)objectID;
          bounds.m_Center.z = fVar8;
          bounds.m_Extents.x = fVar14;
          bounds.m_Extents.y = VStack_5.y;
          bounds.m_Extents.z = VStack_5.z;
          SplashController::SplashController_WaterSplash
                    (this_01,bounds,*pVVar10,objectID,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

