
/* Void OnPreRender() */

void Assembly-CSharp.dll::SunPlane::SunPlane_OnPreRender(SunPlane *this,MethodInfo *method)

{
  pCVar1 = (this->fields).mainCamera;
  pTVar2 = (this->fields).sunPlane;
  if (pCVar1 != (Camera *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
      fVar5 = pVVar4->z;
      this_00 = (this->fields).mainLight;
      if (this_00 != (Light *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          fVar6 = 0.0;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             ((Vector3 *)&puStack_7,pTVar3,(MethodInfo *)0x0);
          uVar8 = pVVar4->x;
          uVar9 = pVVar4->y;
          if (pTVar2 != (Transform *)0x0) {
            value.y = fVar6 - (float)uVar9 * _UNK_?;
            value.x = (float)pTVar3 - (float)uVar8 * _UNK_?;
            value.z = fVar5 - pVVar4->z * _UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,value,(MethodInfo *)0x0);
            pCVar1 = (this->fields).mainCamera;
            pTVar2 = (this->fields).sunPlane;
            if (pCVar1 != (Camera *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pCVar1,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&puStack_7,pTVar3,(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                            (pTVar2,*pVVar4,(MethodInfo *)0x0);
                  pTVar2 = (this->fields).sunPlane;
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                       ((Vector3 *)&puStack_7,pTVar2,(MethodInfo *)0x0);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SunPlane::SunPlane_Start(SunPlane *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  func_?(pCVar1);
  return;
}

