
/* Void AcquireComponents() */

void Assembly-CSharp-firstpass.dll::WaterTile::WaterTile_AcquireComponents
               (WaterTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).reflection;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pPVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pTVar3,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0);
    }
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pPVar1 = (PlanarReflection *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)pTVar3,
                        PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                       );
    (this->fields).reflection = pPVar1;
  }
  pWVar4 = (this->fields).waterBase;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pWVar4,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pTVar3,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0);
    }
    if (pTVar3 != (Transform *)0x0) {
      pWVar4 = (WaterBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)pTVar3,
                          WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
      (this->fields).waterBase = pWVar4;
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnWillRenderObject() */

void Assembly-CSharp-firstpass.dll::WaterTile::WaterTile_OnWillRenderObject
               (WaterTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).reflection;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pPVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pPVar1 = (this->fields).reflection;
    tr = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                   ((Component_1 *)this,(MethodInfo *)0x0);
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_current((MethodInfo *)0x0);
    if (pPVar1 == (PlanarReflection *)0x0) goto code_?;
    PlanarReflection::PlanarReflection_WaterTileBeingRendered(pPVar1,tr,pCVar3,(MethodInfo *)0x0);
  }
  pWVar4 = (this->fields).waterBase;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pWVar4,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pWVar4 = (this->fields).waterBase;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
              ((Component_1 *)this,(MethodInfo *)0x0);
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_current((MethodInfo *)0x0);
    if (pWVar4 == (WaterBase *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pCVar3,(MethodInfo *)0x0);
    if ((bVar2 != 0) && ((pWVar4->fields).edgeBlend != 0)) {
      if (pCVar3 == (Camera *)0x0) goto code_?;
      DVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depthTextureMode
                        (pCVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
                (pCVar3,DVar6 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::WaterTile::WaterTile_Start(WaterTile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).reflection;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pPVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pTVar3,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0);
    }
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pPVar1 = (PlanarReflection *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)pTVar3,
                        PlanarReflection_MethodInfo__UnityEngine__Component__GetComponent<PlanarReflection>__
                       );
    (this->fields).reflection = pPVar1;
  }
  pWVar4 = (this->fields).waterBase;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pWVar4,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pTVar3,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0);
    }
    if (pTVar3 != (Transform *)0x0) {
      pWVar4 = (WaterBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)pTVar3,
                          WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
      (this->fields).waterBase = pWVar4;
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

