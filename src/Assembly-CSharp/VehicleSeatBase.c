
/* Void Attach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Attach
               (VehicleSeatBase *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).UnequipVehicleUser != 0) {
    if ((avatar == (MVAvatar *)0x0) ||
       (this_00 = (avatar->fields)._._.gameObject, this_00 == (GameObject *)0x0)) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (**(code **)&x->klass[1]._0.this_arg.attrs)(x);
    }
  }
  (this->fields).owner = avatar;
  func_?();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Awake
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar1 = (this->fields).DesktopCamera;
  }
  else {
    pMVar1 = (this->fields).AndroidCamera;
  }
  (this->fields).seatCamera = pMVar1;
  func_?(&(this->fields).seatCamera,unaff_EBP);
  return;
}


/* Void Detach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Detach
               (VehicleSeatBase *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).UnequipVehicleUser != 0) {
    if ((avatar == (MVAvatar *)0x0) ||
       (this_00 = (avatar->fields)._._.gameObject, this_00 == (GameObject *)0x0)) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (*(code *)x->klass[1]._0.castClass)(x,x->klass[1]._0.declaringType);
    }
  }
  return;
}


/* Void RemoveCamera() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_RemoveCamera
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLocal);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Camera_is_null);
    cRam_? = '\x01';
  }
  x = (this->fields).seatCamera;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = (this->fields).owner;
    if (pMVar2 != (MVAvatar *)0x0) {
      pAVar3 = (pMVar2->fields).avatar;
      if (pAVar3 != (Avatar *)0x0) {
        if (((pAVar3->klass->_1).naturalAligment < (TypeInfo__AvatarLocal->_1).naturalAligment) ||
           ((pAVar3->klass->_1).typeHierarchy[(TypeInfo__AvatarLocal->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          func_?(pAVar3,TypeInfo__AvatarLocal);
        }
        else if (pAVar3[1].klass != (Avatar__Class *)0x0) {
          func_?(7,TypeInfo__IAvatarCameraController,pAVar3[1].klass,
                          (this->fields).seatCamera);
          return;
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Camera_is_null,(MethodInfo *)0x0);
  return;
}


/* Void SetCamera() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_SetCamera
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLocal);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__IVehicleCamera);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Camera_is_null);
    cRam_? = '\x01';
  }
  x = (this->fields).seatCamera;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Camera_is_null,(MethodInfo *)0x0);
    return;
  }
  pAVar2 = (AvatarLocal__Class *)(this->fields).seatCamera;
  pMVar3 = (this->fields).owner;
  if (pAVar2 == (AvatarLocal__Class *)0x0) goto code_?;
  pMVar4 = (MVAvatar *)TypeInfo__IVehicleCamera;
  iVar5 = func_?(pAVar2,TypeInfo__IVehicleCamera,TypeInfo__IVehicleCamera);
  if (iVar5 == 0) {
code_?:
    func_?(pAVar2,pMVar4);
    pMVar6 = extraout_EDX;
  }
  else if ((pMVar3 == (MVAvatar *)0x0) ||
          ((pMVar6 = TypeInfo__MVAvatarLocal,
           (TypeInfo__MVAvatarLocal->_1).naturalAligment <=
           *(byte *)&((Il2CppClass_0 *)&pMVar3->klass)->image[4].assembly &&
           (*(MVAvatarLocal__Class **)
             ((((Il2CppClass_0 *)&pMVar3->klass)->image[2].typeCount - 4) +
             (uint)(TypeInfo__MVAvatarLocal->_1).naturalAligment * 4) == TypeInfo__MVAvatarLocal))))
  {
    pMVar4 = (MVAvatar *)TypeInfo__IVehicleCamera;
    piVar7 = (int *)func_?(pAVar2,TypeInfo__IVehicleCamera,TypeInfo__IVehicleCamera);
    if (piVar7 != (int *)0x0) {
      iVar5 = *piVar7;
      uVar8 = 0;
      uVar9 = *(ushort *)(iVar5 + 0xb6);
      pMVar4 = (MVAvatar *)(uint)uVar9;
      if (uVar9 != 0) {
        do {
          if (*(IVehicleCamera__Class **)(*(int *)(iVar5 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__IVehicleCamera) {
            puVar10 = (undefined4 *)
                     (iVar5 + (*(int *)(*(int *)(iVar5 + 0x58) + 4 + (uint)uVar8 * 8) + 0x1a) * 8);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar10 = (undefined4 *)func_?(piVar7,TypeInfo__IVehicleCamera,2);
code_?:
      (*(code *)*puVar10)(piVar7,pMVar3,puVar10[1]);
      pAVar2 = TypeInfo__AvatarLocal;
      pMVar3 = (this->fields).owner;
      if ((pMVar3 == (MVAvatar *)0x0) ||
         (pAVar11 = (pMVar3->fields).avatar, pAVar11 == (Avatar *)0x0)) goto code_?;
      pMVar12 = (MVAvatar *)pAVar11->klass;
      pMVar3 = pMVar12;
      if (((TypeInfo__AvatarLocal->_1).naturalAligment <=
           (byte)(pMVar12->fields)._._.interactionFlags) &&
         (pMVar3 = pMVar4,
         *(AvatarLocal__Class **)
          ((int)(pMVar12->fields)._._._.OnInputLinkChanged +
          (uint)(TypeInfo__AvatarLocal->_1).naturalAligment * 4 + -4) == TypeInfo__AvatarLocal)) {
        if (pAVar11[1].klass != (Avatar__Class *)0x0) {
          func_?(5,TypeInfo__IAvatarCameraController,pAVar11[1].klass,
                          (this->fields).seatCamera);
          return;
        }
        goto code_?;
      }
      func_?(pAVar11,TypeInfo__AvatarLocal);
    }
    goto code_?;
  }
  func_?(pMVar3,pMVar6);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void set_SeatID(Int32) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_set_SeatID
               (VehicleSeatBase *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Trying_to_re_set_seatID);
    cRam_? = '\x01';
  }
  if ((this->fields).seatID != -1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Trying_to_re_set_seatID,(MethodInfo *)0x0);
    return;
  }
  (this->fields).seatID = value;
  return;
}

