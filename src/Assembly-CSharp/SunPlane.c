
/* Void OnPreRender() */

void Assembly-CSharp.dll::SunPlane::SunPlane_OnPreRender(SunPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  pTVar2 = (this->fields).sunPlane;
  if (pCVar1 != (Camera *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pCVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,pTVar3,(MethodInfo *)0x0);
      uVar6._0_4_ = pVVar4->x;
      uStack_7 = pVVar4->y;
      fVar8 = pVVar4->z;
      this_00 = (this->fields).mainLight;
      if (this_00 != (Light *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          uVar6 = uVar6 & 0xffffffff00000000;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
          VStack_5.y = pVVar4->x;
          VStack_5.z = pVVar4->y;
          fVar9 = pVVar4->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            VStack_5.y = (float)TypeInfo__UnityEngine__Vector3;
            VStack_5.x = (float)&UNK_?;
            func_?();
          }
          a.z = fVar9;
          a.x = VStack_5.y;
          a.y = VStack_5.z;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffdc,a,30.0,(MethodInfo *)0x0);
          a_00.z = fVar8;
          uStack_7 = (undefined4)(uVar6 >> 0x20);
          a_00.x = (float)(undefined4)uVar6;
          a_00.y = (float)uStack_7;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffffdc,a_00,*pVVar4,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,*pVVar4,(MethodInfo *)0x0);
            pCVar1 = (this->fields).mainCamera;
            pTVar2 = (this->fields).sunPlane;
            if (pCVar1 != (Camera *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pCVar1,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                            (pTVar2,*pVVar4,(MethodInfo *)0x0);
                  pTVar2 = (this->fields).sunPlane;
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                       ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                              (pTVar2,*pVVar4,5156.62,Space__Enum_World,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SunPlane::SunPlane_Start(SunPlane *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  return;
}

