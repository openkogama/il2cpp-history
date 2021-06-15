
/* Void Update() */

void Assembly-CSharp.dll::CFX2_AutoRotate::CFX2_AutoRotate_Update
               (CFX2_AutoRotate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  VVar1 = (this->fields).speed;
  d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,VVar1,d,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    this = (CFX2_AutoRotate *)pVVar2->z;
    fVar5 = (float)uVar4;
    VVar1.x = (float)uVar3;
    VVar1 = (Vector3)CONCAT84(uVar6,VVar1.x);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
              (this_00,VVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CFX2_AutoRotate() */

void Assembly-CSharp.dll::CFX2_AutoRotate::CFX2_AutoRotate__ctor
               (CFX2_AutoRotate *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x42200000,0,0);
  (this->fields).speed.x = (float)(undefined4)uStack_2;
  (this->fields).speed.y = (float)uStack_2._4_4_;
  (this->fields).speed.z = fStack_1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

