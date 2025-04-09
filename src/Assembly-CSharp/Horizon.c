
/* Void Awake() */

void Assembly-CSharp.dll::Horizon::Horizon_Awake(Horizon *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    (this->fields).offset.x = pVVar2->x;
    (this->fields).offset.y = fVar3;
    (this->fields).offset.z = fVar4;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      (this->fields).parent = pTVar1;
      func_?();
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar1,(Transform *)0x0,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Horizon::Horizon_Update(Horizon *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).parent;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    VStack_2.x = (this->fields).offset.x;
    VStack_2.y = (this->fields).offset.y;
    VStack_2.z = (this->fields).offset.z;
    if (this_01 != (Transform *)0x0) {
      value.y = (float)uVar4 + VStack_2.y;
      value.x = VStack_2.x + (float)uVar3;
      value.z = VStack_2.z + pVVar1->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

