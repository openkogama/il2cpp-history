
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
      (this->fields)._accumDrag.x = ((float)uVar5 - (float)uVar1) + (float)uVar7;
      (this->fields)._accumDrag.y = ((float)uVar6 - (float)uVar2) + (float)uVar8;
      (this->fields)._accumDrag.z = fVar3 + fVar9;
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
  RStack_1.m_Origin.x = 0.0;
  RStack_1.m_Origin.y = 0.0;
  RStack_1.m_Origin.z = 0.0;
  RStack_1.m_Direction.x = 0.0;
  RStack_1.m_Direction.y = 0.0;
  RStack_1.m_Direction.z = 0.0;
  pIVar2 = (this->fields)._inputDevice;
  pCStack_3 = (this->fields)._raycastCamera;
  pIStack_4 = pIVar2;
  if (pIVar2 == (IInputDevice *)0x0) {
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  pIVar7 = pIVar2->klass;
  uVar8 = 0;
  uVar9._0_1_ = (pIVar7->_1).rank;
  uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar9 != 0) {
    do {
      if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
          (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
        ppMVar10 = &(&(pIVar2->klass->vtable).GetRay)
                    [pIVar2->klass->interfaceOffsets[uVar8].offset].method;
        goto code_?;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  ppMVar10 = (MethodInfo **)func_?(pIVar2,TypeInfo__RTG__IInputDevice,6);
code_?:
  pfVar11 = (float *)(*(code *)*ppMVar10)(auStack_12,pIVar2,pCStack_3,ppMVar10[1]);
  RStack_1.m_Origin.x = *pfVar11;
  RStack_1.m_Origin.y = pfVar11[1];
  RStack_1.m_Origin.z = pfVar11[2];
  RStack_1.m_Direction.x = pfVar11[3];
  RStack_1.m_Direction.y = pfVar11[4];
  RStack_1.m_Direction.z = pfVar11[5];
  uVar13 = *(undefined8 *)(pfVar11 + 4);
  fVar14 = pfVar11[1];
  uVar15 = (this->fields)._plane.m_Normal.x;
  uVar16 = (this->fields)._plane.m_Normal.y;
  fVar17 = (this->fields)._plane.m_Normal.z;
  uStack_18._0_4_ = (float)uVar13;
  uStack_18._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
  pCStack_3 = (Camera *)
               ((float)uStack_18 * (float)uVar16 + pfVar11[3] * (float)uVar15 +
               uStack_18._4_4_ * fVar17);
  uVar19 = (this->fields)._plane.m_Normal.x;
  uVar20 = (this->fields)._plane.m_Normal.y;
  uStack_21 = (uint)fVar14 ^
              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
  VStack_22.x = (float)((uint)(fVar14 * (float)uVar20 + *pfVar11 * (float)uVar19 + pfVar11[2] * fVar17
                              ) ^
                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field) -
                (this->fields)._plane.m_Distance;
  VStack_22.z = (float)((uint)fVar14 ^
                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  VStack_22.y = (float)((uint)fVar14 ^
                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  uStack_18 = uVar13;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar17 = (float)((uint)pCStack_3 & _UNK_?);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar23 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar14 = fVar17 * _UNK_?;
  if (fVar17 * _UNK_? <= fVar23) {
    fVar14 = fVar23;
  }
  if ((fVar14 <= (float)((uint)(0.0 - (float)pCStack_3) & _UNK_?)) &&
     (0.0 < VStack_22.x / (float)pCStack_3)) {
    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        (&VStack_22,&RStack_1,VStack_22.x / (float)pCStack_3,(MethodInfo *)0x0);
    fVar14 = pVVar24->y;
    fVar17 = pVVar24->z;
    (this->fields)._dragPoint.x = pVVar24->x;
    (this->fields)._dragPoint.y = fVar14;
    (this->fields)._dragPoint.z = fVar17;
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
  (this->fields)._inputDevice = inputDevice;
  func_?(&(this->fields)._inputDevice,inputDevice);
  (this->fields)._raycastCamera = raycastCamera;
  func_?(&(this->fields)._raycastCamera,raycastCamera);
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
    (this->fields)._raycastCamera = value;
    func_?(&(this->fields)._raycastCamera,value);
  }
  return;
}

