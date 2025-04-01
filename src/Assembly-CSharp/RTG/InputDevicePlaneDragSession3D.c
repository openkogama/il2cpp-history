
/* Boolean Begin() */

bool Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_Begin
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._isActive == 0) {
    x = (this->fields)._raycastCamera;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = InputDevicePlaneDragSession3D_UpdateDragPoint(this,(MethodInfo *)0x0);
      (this->fields)._isActive = bVar1;
      return bVar1;
    }
  }
  return 0;
}


/* Void End() */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_End
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

{
  if ((this->fields)._isActive != 0) {
    (this->fields)._isActive = 0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    (this->fields)._dragPoint.x = (pVVar1->zeroVector).x;
    (this->fields)._dragPoint.y = fVar2;
    (this->fields)._dragPoint.z = fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    (this->fields)._dragDelta.x = (pVVar1->zeroVector).x;
    (this->fields)._dragDelta.y = fVar2;
    (this->fields)._dragDelta.z = fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    (this->fields)._accumDrag.x = (pVVar1->zeroVector).x;
    (this->fields)._accumDrag.y = fVar2;
    (this->fields)._accumDrag.z = fVar3;
    (this->fields)._plane.m_Normal.x = 0.0;
    (this->fields)._plane.m_Normal.y = 0.0;
    (this->fields)._plane.m_Normal.z = 0.0;
    (this->fields)._plane.m_Distance = 0.0;
  }
  return;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D_Update
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

{
  if ((this->fields)._isActive != 0) {
    uVar1 = (this->fields)._dragPoint.x;
    uVar2 = (this->fields)._dragPoint.y;
    fVar3 = (this->fields)._dragPoint.z;
    bVar4 = InputDevicePlaneDragSession3D_UpdateDragPoint(this,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      uVar5 = (this->fields)._dragPoint.x;
      uVar6 = (this->fields)._dragPoint.y;
      fVar3 = (this->fields)._dragPoint.z - fVar3;
      (this->fields)._dragDelta.x = (float)uVar5 - (float)uVar1;
      (this->fields)._dragDelta.y = (float)uVar6 - (float)uVar2;
      uVar7 = (this->fields)._accumDrag.x;
      uVar8 = (this->fields)._accumDrag.y;
      (this->fields)._dragDelta.z = fVar3;
      fVar9 = (this->fields)._accumDrag.z;
      (this->fields)._accumDrag.x = (float)uVar7 + ((float)uVar5 - (float)uVar1);
      (this->fields)._accumDrag.y = (float)uVar8 + ((float)uVar6 - (float)uVar2);
      (this->fields)._accumDrag.z = fVar9 + fVar3;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar9 = (pVVar10->zeroVector).y;
    fVar3 = (pVVar10->zeroVector).z;
    (this->fields)._dragDelta.x = (pVVar10->zeroVector).x;
    (this->fields)._dragDelta.y = fVar9;
    (this->fields)._dragDelta.z = fVar3;
  }
  return 0;
}


/* Boolean UpdateDragPoint() */

bool Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::
     InputDevicePlaneDragSession3D_UpdateDragPoint
               (InputDevicePlaneDragSession3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._inputDevice;
  pCStack_2 = (this->fields)._raycastCamera;
  pIStack_3 = pIVar1;
  if (pIVar1 == (IInputDevice *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pIStack_6 = pIVar1->klass;
  uVar7 = 0;
  uVar8._0_1_ = (pIStack_6->_1).rank;
  uVar8._1_1_ = (pIStack_6->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pIStack_6->interfaceOffsets[uVar7].interfaceType ==
          (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
        ppMVar9 = &(&(pIStack_6->vtable).GetRay)[pIStack_6->interfaceOffsets[uVar7].offset].
                    method;
        goto code_?;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  ppMVar9 = (MethodInfo **)func_?(pIVar1,TypeInfo__RTG__IInputDevice,6);
code_?:
  pfVar10 = (float *)(*(code *)*ppMVar9)(&fStack_11,pIVar1,pCStack_2,ppMVar9[1]);
  RStack_12.m_Origin.x = *pfVar10;
  RStack_12.m_Origin.y = pfVar10[1];
  RStack_12.m_Origin.z = pfVar10[2];
  RStack_12.m_Direction.x = pfVar10[3];
  RStack_12.m_Direction.y = pfVar10[4];
  RStack_12.m_Direction.z = pfVar10[5];
  uVar13 = *(undefined8 *)(pfVar10 + 4);
  fVar14 = pfVar10[1];
  fStack_15 = pfVar10[3];
  uVar16 = (this->fields)._plane.m_Normal.x;
  uVar17 = (this->fields)._plane.m_Normal.y;
  fVar18 = (this->fields)._plane.m_Normal.z;
  uStack_19._0_4_ = (float)uVar13;
  uStack_19._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
  fStack_11 = fStack_15 * (float)uVar16 + (float)uStack_19 * (float)uVar17 + uStack_19._4_4_ * fVar18;
  uVar20 = (this->fields)._plane.m_Normal.x;
  uVar21 = (this->fields)._plane.m_Normal.y;
  uStack_22 = (uint)fVar14 ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  VStack_23.x = (float)((uint)(fVar14 * (float)uVar21 + *pfVar10 * (float)uVar20 + pfVar10[2] * fVar18
                              ) ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) -
                (this->fields)._plane.m_Distance;
  VStack_23.z = (float)((uint)fVar14 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  VStack_23.y = (float)((uint)fVar14 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fStack_24 = fStack_15;
  fStack_25 = fStack_15;
  uStack_19 = uVar13;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar18 = (float)((uint)fStack_11 & _UNK_?);
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar26 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar14 = fVar18 * _UNK_?;
  if (fVar18 * _UNK_? <= fVar26) {
    fVar14 = fVar26;
  }
  if ((fVar14 <= (float)((uint)(0.0 - fStack_11) & _UNK_?)) &&
     (0.0 < VStack_23.x / fStack_11)) {
    pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        (&VStack_23,&RStack_12,VStack_23.x / fStack_11,(MethodInfo *)0x0);
    fVar14 = pVVar27->y;
    fVar18 = pVVar27->z;
    (this->fields)._dragPoint.x = pVVar27->x;
    (this->fields)._dragPoint.y = fVar14;
    (this->fields)._dragPoint.z = fVar18;
    return 1;
  }
  return 0;
}


/* InputDevicePlaneDragSession3D(IInputDevice, Camera) */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::InputDevicePlaneDragSession3D__ctor
               (InputDevicePlaneDragSession3D *this,IInputDevice *inputDevice,Camera *raycastCamera,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppIVar1 = &(this->fields)._inputDevice;
  *ppIVar1 = inputDevice;
  func_?(ppIVar1,inputDevice);
  ppCVar2 = &(this->fields)._raycastCamera;
  *ppCVar2 = raycastCamera;
  func_?(ppCVar2,raycastCamera);
  return;
}


/* Void set_Plane(Plane) */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::
     InputDevicePlaneDragSession3D_set_Plane
               (InputDevicePlaneDragSession3D *this,Plane value,MethodInfo *method)

{
  if ((this->fields)._isActive == 0) {
    (this->fields)._plane.m_Normal.x = value.m_Normal.x;
    (this->fields)._plane.m_Normal.y = value.m_Normal.y;
    (this->fields)._plane.m_Normal.z = value.m_Normal.z;
    (this->fields)._plane.m_Distance = value.m_Distance;
  }
  return;
}


/* Void set_RaycastCamera(Camera) */

void Assembly-CSharp.dll::RTG::InputDevicePlaneDragSession3D::
     InputDevicePlaneDragSession3D_set_RaycastCamera
               (InputDevicePlaneDragSession3D *this,Camera *value,MethodInfo *method)

{
  if ((this->fields)._isActive == 0) {
    ppCVar1 = &(this->fields)._raycastCamera;
    *ppCVar1 = value;
    func_?(ppCVar1,value);
  }
  return;
}

