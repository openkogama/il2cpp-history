
/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::ClosestPointSphere::ClosestPointSphere_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,ClosestPointSphere *this,Vector3 spectator,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).offset.x;
  fVar2 = (this->fields).offset.y;
  uVar3._0_4_ = (this->fields).offset.z;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       (&VStack_6,pTVar4,(MethodInfo *)0x0);
    a_02.y = fVar2;
    a_02.x = fVar1;
    a_02.z = (float)uVar3;
    pVVar5 = MathFunctions::MathFunctions_Multiply
                       ((Vector3 *)&stack0xfffffff0,a_02,*pVVar5,(MethodInfo *)0x0);
    VStack_6.y = pVVar5->x;
    VStack_6.z = pVVar5->y;
    fVar1 = pVVar5->z;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      VStack_6.z = (float)&UNK_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xffffffcc,pTVar4,(MethodInfo *)0x0);
      this_00 = pVVar5->y;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)pVVar5->z);
      if (pTVar4 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffcc,pTVar4,(MethodInfo *)0x0);
        uVar3._0_4_ = pVVar5->x;
        uVar3._4_4_ = pVVar5->y;
        fVar2 = pVVar5->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        spectator.x = VStack_6.y;
        __return_storage_ptr__ = (Vector3 *)((ulonglong)uVar3 >> 0x20);
        a.z = fVar2;
        a.x = (float)(int)uVar3;
        a.y = (float)(int)((ulonglong)uVar3 >> 0x20);
        b.z = fVar1;
        b.x = VStack_6.y;
        b.y = VStack_6.z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffcc,a,b,(MethodInfo *)0x0);
        VStack_6.y = pVVar5->x;
        VStack_6.z = pVVar5->y;
        fVar1 = pVVar5->z;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffcc,pTVar4,(MethodInfo *)0x0);
          a_00.y = (float)&UNK_?;
          a_00.x = spectator.x;
          a_00.z = (float)this;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)&stack0xffffffcc,a_00,*pVVar5,(MethodInfo *)0x0);
          pVVar5 = (Vector3 *)func_?();
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffcc,*pVVar5,fVar2,(MethodInfo *)0x0);
          a_01.z = fVar1;
          a_01.x = VStack_6.y;
          a_01.y = VStack_6.z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffffcc,a_01,*pVVar5,(MethodInfo *)0x0);
          fVar2 = pVVar5->y;
          fVar1 = pVVar5->z;
          __return_storage_ptr__->x = pVVar5->x;
          __return_storage_ptr__->y = fVar2;
          __return_storage_ptr__->z = fVar1;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar7)();
  return pVVar5;
}


/* Void OnDrawGizmos() */

void Assembly-CSharp.dll::ClosestPointSphere::ClosestPointSphere_OnDrawGizmos
               (ClosestPointSphere *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                     ((Color *)&puStack_2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Gizmos::Gizmos_set_color(*pCVar1,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    uVar4._0_4_ = (this->fields).offset.x;
    uVar4._4_4_ = (this->fields).offset.y;
    fVar5 = (this->fields).offset.z;
    uVar6._0_4_ = pVVar3->x;
    uVar6._4_4_ = pVVar3->y;
    fVar7 = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar7;
    a.x = (float)(int)uVar6;
    a.y = (float)(int)((ulonglong)uVar6 >> 0x20);
    b.z = fVar5;
    b.x = (float)(int)uVar4;
    b.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Gizmos::Gizmos_DrawWireSphere
              (*pVVar3,(this->fields).radius,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* ClosestPointSphere() */

void Assembly-CSharp.dll::ClosestPointSphere::ClosestPointSphere__ctor
               (ClosestPointSphere *this,MethodInfo *method)

{
  (this->fields).radius = 1.0;
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

