
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
  (this->fields)._IsOccupied_k__BackingField = 1;
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
  ppMVar1 = &(this->fields).seatCamera;
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    *ppMVar1 = (this->fields).DesktopCamera;
  }
  else {
    *ppMVar1 = (this->fields).AndroidCamera;
  }
  func_?(ppMVar1,unaff_EBP);
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
      (*(code *)x->klass[1]._0.castClass)();
    }
  }
  (this->fields)._IsOccupied_k__BackingField = 0;
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
        bVar4 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar3->klass->_1).naturalAligment < bVar4) ||
           ((pAVar3->klass->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
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
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
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
  pIVar2 = TypeInfo__IVehicleCamera;
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Camera_is_null,(MethodInfo *)0x0);
    return;
  }
  pAVar3 = (AvatarLocal__Class *)(this->fields).seatCamera;
  pMVar4 = (this->fields).owner;
  if (pAVar3 == (AvatarLocal__Class *)0x0) goto code_?;
  iVar5 = func_?(pAVar3,TypeInfo__IVehicleCamera);
  pIVar6 = TypeInfo__IVehicleCamera;
  if (iVar5 == 0) {
code_?:
    func_?(pAVar3,pIVar2);
    pMVar7 = extraout_EDX;
  }
  else {
    if (pMVar4 == (MVAvatar *)0x0) {
code_?:
      piVar8 = (int *)func_?(pAVar3,TypeInfo__IVehicleCamera);
      pIVar2 = pIVar6;
      if (piVar8 != (int *)0x0) {
        pIVar6 = (IVehicleCamera__Class *)*piVar8;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar6->_1).rank;
        uVar10._1_1_ = (pIVar6->_1).minimumAlignment;
        pIVar2 = pIVar6;
        if (uVar10 != 0) {
          pIVar2 = (IVehicleCamera__Class *)pIVar6->interfaceOffsets;
          do {
            if ((Il2CppClass *)(&(pIVar2->_0).image)[(uint)uVar9 * 2] ==
                (Il2CppClass *)TypeInfo__IVehicleCamera) {
              ppMVar11 = &(&(pIVar6->vtable).Initialize)
                         [(int)(&(pIVar2->_0).gc_desc)[(uint)uVar9 * 2]].method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppMVar11 = (MethodInfo **)func_?(piVar8,TypeInfo__IVehicleCamera,2);
code_?:
        (*(code *)*ppMVar11)(piVar8,pMVar4,ppMVar11[1]);
        pAVar3 = TypeInfo__AvatarLocal;
        pMVar4 = (this->fields).owner;
        if ((pMVar4 == (MVAvatar *)0x0) ||
           (pAVar12 = (pMVar4->fields).avatar, pAVar12 == (Avatar *)0x0)) goto code_?;
        bVar13 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if ((bVar13 <= (pAVar12->klass->_1).naturalAligment) &&
           ((pAVar12->klass->_1).typeHierarchy[bVar13 - 1] == (Il2CppClass *)TypeInfo__AvatarLocal)) {
          if (pAVar12[1].klass != (Avatar__Class *)0x0) {
            func_?(5,TypeInfo__IAvatarCameraController,pAVar12[1].klass,
                            (this->fields).seatCamera);
            return;
          }
          goto code_?;
        }
        func_?(pAVar12,TypeInfo__AvatarLocal);
        pMVar4 = (MVAvatar *)this;
      }
      goto code_?;
    }
    bVar13 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    pMVar7 = TypeInfo__MVAvatarLocal;
    if ((bVar13 <= (pMVar4->klass->_1).naturalAligment) &&
       ((MVAvatarLocal__Class *)(pMVar4->klass->_1).typeHierarchy[bVar13 - 1] ==
        TypeInfo__MVAvatarLocal)) goto code_?;
  }
  func_?(pMVar4,pMVar7);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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

