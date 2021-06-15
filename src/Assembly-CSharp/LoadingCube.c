
/* Void SelfDestruct() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_SelfDestruct
               (LoadingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_Update(LoadingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar2 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if ((MVar2 == MVJoinState__Enum_Playing) && ((this->fields).visible != 0)) {
    bVar3 = cRam_? == '\0';
    (this->fields).visible = 0;
    if (bVar3) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      VStack_5.y = (float)TypeInfo__UnityEngine__Object;
      VStack_5.x = (float)&UNK_?;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  }
  pGVar4 = (this->fields).cube;
  if (pGVar4 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      VStack_5.y = (float)TypeInfo__UnityEngine__Vector3;
      VStack_5.x = (float)&UNK_?;
      func_?();
    }
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       (&VStack_5,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar6->x;
    uStack_7._4_4_ = pVVar6->y;
    fVar8 = pVVar6->z;
    fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      axis.z = fVar8;
      axis.x = (float)(undefined4)uStack_7;
      axis.y = (float)uStack_7._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (this_00,axis,fStack_9 * _UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* LoadingCube() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube__ctor(LoadingCube *this,MethodInfo *method)

{
  (this->fields).visible = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

