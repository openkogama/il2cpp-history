
/* Void Attach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Attach
               (VehicleSeatBase *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).UnequipVehicleUser != 0) {
    if ((avatar == (MVAvatar *)0x0) ||
       (this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)avatar,(MethodInfo *)0x0),
       this_00 == (CelestialParam *)0x0)) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                  ((GameObject *)this_00,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (UseInteractorHandler *)0x0) goto code_?;
      (**(code **)&x->klass[1]._0.byval_arg.attrs)(x,x->klass[1]._0.this_arg.data.dummy);
    }
  }
  (this->fields).owner = avatar;
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Awake
               (VehicleSeatBase *this,MethodInfo *method)

{
  (this->fields).seatCamera = (this->fields).DesktopCamera;
  return;
}


/* Void Detach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Detach
               (VehicleSeatBase *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).UnequipVehicleUser != 0) {
    if ((avatar == (MVAvatar *)0x0) ||
       (this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)avatar,(MethodInfo *)0x0),
       this_00 == (CelestialParam *)0x0)) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                  ((GameObject *)this_00,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (x == (UseInteractorHandler *)0x0) goto code_?;
      (**(code **)&x->klass[1]._0.this_arg.attrs)(x,x->klass[1]._0.element_class);
    }
  }
  return;
}


/* Void RemoveCamera() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_RemoveCamera
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).seatCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Camera_is_null,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).owner;
  if (this_00 != (MVAvatar *)0x0) {
    pAVar2 = (AvatarUIHandlerRemote *)
             MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                       ((MVCubeModelBase *)this_00,(MethodInfo *)0x0);
    if (pAVar2 != (AvatarUIHandlerRemote *)0x0) {
      bVar3 = (TypeInfo__AvatarLocal->_1).naturalAligment;
      pFVar4 = (Func_1_IModelingConstraint___Class *)pAVar2->klass;
      if (((pFVar4->_1).naturalAligment < bVar3) ||
         (bVar5 = true,
         (pFVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
        bVar5 = false;
      }
      pAVar6 = (AvatarUIHandlerRemote *)0x0;
      if (bVar5) {
        pAVar6 = pAVar2;
      }
      if (pAVar6 != (AvatarUIHandlerRemote *)0x0) {
        if (((pFVar4->_1).naturalAligment < bVar3) ||
           ((pFVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pAVar6 = (AvatarUIHandlerRemote *)0x0;
        if (bVar5) {
          pAVar6 = pAVar2;
        }
        if (pAVar6 != (AvatarUIHandlerRemote *)0x0) {
          pSVar7 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                             (pAVar6,(MethodInfo *)0x0);
          if (pSVar7 != (ShieldBar *)0x0) {
            func_?(7);
            return;
          }
          goto code_?;
        }
      }
      func_?(pAVar2,TypeInfo__AvatarLocal);
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetCamera() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_SetCamera
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).seatCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  pMVar3 = (MVAvatar *)TypeInfo__IVehicleCamera;
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Camera_is_null,(MethodInfo *)0x0);
    return;
  }
  pMVar1 = (this->fields).seatCamera;
  pMVar4 = (this->fields).owner;
  if (pMVar1 == (MVCameraBase *)0x0) goto code_?;
  iVar5 = func_?(pMVar1,TypeInfo__IVehicleCamera);
  pIVar6 = TypeInfo__IVehicleCamera;
  if (iVar5 != 0) {
    if (pMVar4 == (MVAvatar *)0x0) {
      pMVar3 = (MVAvatar *)0x0;
code_?:
      piVar7 = (int *)func_?(pMVar1,TypeInfo__IVehicleCamera);
      pMVar4 = (MVAvatar *)pIVar6;
      if (piVar7 != (int *)0x0) {
        iVar5 = *piVar7;
        uVar8 = 0;
        if (*(ushort *)(iVar5 + 0xb6) != 0) {
          do {
            if (*(IVehicleCamera__Class **)(*(int *)(iVar5 + 0x58) + (uint)uVar8 * 8) ==
                TypeInfo__IVehicleCamera) {
              puVar9 = (undefined4 *)
                       (iVar5 + 0xd0 + *(int *)(*(int *)(iVar5 + 0x58) + 4 + (uint)uVar8 * 8) * 8);
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(iVar5 + 0xb6));
        }
        puVar9 = (undefined4 *)func_?(piVar7,TypeInfo__IVehicleCamera,2,iVar5,0);
code_?:
        (*(code *)*puVar9)(piVar7,pMVar3,puVar9[1]);
        pMVar3 = (this->fields).owner;
        if ((pMVar3 == (MVAvatar *)0x0) ||
           (pAVar10 = (AvatarUIHandlerRemote *)
                      MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                                ((MVCubeModelBase *)pMVar3,(MethodInfo *)0x0),
           pAVar10 == (AvatarUIHandlerRemote *)0x0)) goto code_?;
        pMVar3 = (MVAvatar *)pAVar10->klass;
        bVar11 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        pMVar1 = (MVCameraBase *)(uint)bVar11;
        if (((byte)(pMVar3->fields)._._.interactionFlags < bVar11) ||
           (bVar12 = true,
           *(AvatarLocal__Class **)
            ((int)(pMVar3->fields)._._._.OnInputLinkChanged + (int)pMVar1 * 4 + -4) !=
           TypeInfo__AvatarLocal)) {
          bVar12 = false;
        }
        pAVar13 = (AvatarUIHandlerRemote *)0x0;
        if (bVar12) {
          pAVar13 = pAVar10;
        }
        if (pAVar13 != (AvatarUIHandlerRemote *)0x0) {
          uVar14 = (uint3)((uint)pMVar3 >> 8);
          if (((byte)(pMVar3->fields)._._.interactionFlags < bVar11) ||
             (*(AvatarLocal__Class **)
               ((int)(pMVar3->fields)._._._.OnInputLinkChanged + (int)pMVar1 * 4 + -4) !=
              TypeInfo__AvatarLocal)) {
            pMVar3 = (MVAvatar *)((uint)uVar14 << 8);
          }
          else {
            pMVar3 = (MVAvatar *)CONCAT31(uVar14,1);
          }
          pAVar13 = (AvatarUIHandlerRemote *)0x0;
          if ((char)pMVar3 != '\0') {
            pAVar13 = pAVar10;
          }
          if (pAVar13 != (AvatarUIHandlerRemote *)0x0) {
            pSVar15 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                                (pAVar13,(MethodInfo *)0x0);
            if (pSVar15 != (ShieldBar *)0x0) {
              func_?(5,TypeInfo__IAvatarCameraController,pSVar15,(this->fields).seatCamera)
              ;
              return;
            }
            goto code_?;
          }
        }
        func_?(pAVar10,TypeInfo__AvatarLocal);
        pMVar4 = (MVAvatar *)this;
      }
      func_?(pMVar1,pMVar4);
      pMVar16 = extraout_EDX;
    }
    else {
      pIVar17 = ((Il2CppClass_0 *)&pMVar4->klass)->image;
      bVar11 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((*(byte *)&pIVar17[4].assembly < bVar11) ||
         (*(MVAvatarLocal__Class **)((pIVar17[2].typeCount - 4) + (uint)bVar11 * 4) !=
          TypeInfo__MVAvatarLocal)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      pMVar3 = (MVAvatar *)0x0;
      if (bVar12) {
        pMVar3 = pMVar4;
      }
      pMVar16 = TypeInfo__MVAvatarLocal;
      if (pMVar3 != (MVAvatar *)0x0) goto code_?;
    }
    func_?(pMVar4,pMVar16);
  }
  func_?(pMVar1,pMVar3);
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void set_SeatID(Int32) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_set_SeatID
               (VehicleSeatBase *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).seatID != -1) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Trying_to_re_set_seatID,(MethodInfo *)0x0);
    return;
  }
  (this->fields).seatID = value;
  return;
}

