
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_ContainsPoint
               (ConeShape2D *this,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  ConeShape2D_get_CentralAxis(this,(MethodInfo *)0x0);
  fVar1 = (this->fields)._baseCenter.y;
  VVar2 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fStack_3 = VVar2.y;
  fVar1 = fVar1 + fStack_3 * (this->fields)._baseRadius;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  VVar2.y = 0.0;
  VVar2.x = fVar1;
  bVar4 = TriangleMath::TriangleMath_Contains2DPoint
                    (point,VVar2,(Vector2)0x0,(Vector2)((ulonglong)(uint)fVar1 << 0x20),
                     (TriangleEpsilon)ZEXT812(0),(MethodInfo *)0x0);
  return bVar4;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,ConeShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector2_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  pMVar4 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fStack_5 = VVar3.y;
  fVar1 = fVar1 - fStack_6 * (this->fields)._baseRadius;
  fVar2 = fVar2 - fStack_5 * (this->fields)._baseRadius;
  if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar7 = &(this_00->fields)._version;
    *piVar7 = *piVar7 + 1;
    pVVar8 = (this_00->fields)._items;
    if (pVVar8 != (Vector2__Array *)0x0) {
      uVar9 = (this_00->fields)._size;
      if (uVar9 < pVVar8->max_length) {
        (this_00->fields)._size = uVar9 + 1;
        if (pVVar8->max_length <= uVar9) goto code_?;
        pVVar8->vector[uVar9].x = fVar1;
        pVVar8->vector[uVar9].y = fVar2;
      }
      else {
        VVar3.y = fVar2;
        VVar3.x = fVar1;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  (this_00,VVar3,pMVar4->klass->rgctx_data[0xe].method);
      }
      fVar2 = (this->fields)._baseCenter.x;
      this_01 = (ConeShape2D *)(this->fields)._baseCenter.y;
      VVar3 = ConeShape2D_get_CentralAxis(this_01,(MethodInfo *)0x0);
      pMVar4 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fStack_5 = VVar3.y;
      fVar2 = fVar2 + fVar1 * (this->fields)._height;
      fVar1 = (float)this_01 + fStack_5 * (this->fields)._height;
      piVar7 = &(this_00->fields)._version;
      *piVar7 = *piVar7 + 1;
      pVVar8 = (this_00->fields)._items;
      if (pVVar8 != (Vector2__Array *)0x0) {
        uVar9 = (this_00->fields)._size;
        if (uVar9 < pVVar8->max_length) {
          (this_00->fields)._size = uVar9 + 1;
          if (pVVar8->max_length <= uVar9) goto code_?;
          pVVar8->vector[uVar9].x = fVar2;
          pVVar8->vector[uVar9].y = fVar1;
        }
        else {
          __return_storage_ptr__ = (Rect *)pMVar4->klass->rgctx_data[0xe].method;
          item_00.y = fVar1;
          item_00.x = fVar2;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (this_00,item_00,(MethodInfo *)__return_storage_ptr__);
        }
        fVar1 = (this->fields)._baseCenter.x;
        fVar10 = (this->fields)._baseCenter.y;
        VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
        pMVar4 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fStack_5 = VVar3.y;
        fVar1 = fVar1 + fVar2 * (this->fields)._baseRadius;
        fVar10 = fVar10 + fStack_5 * (this->fields)._baseRadius;
        piVar7 = &(this_00->fields)._version;
        *piVar7 = *piVar7 + 1;
        pVVar8 = (this_00->fields)._items;
        if (pVVar8 != (Vector2__Array *)0x0) {
          uVar9 = (this_00->fields)._size;
          if (pVVar8->max_length <= uVar9) {
            item.y = fVar10;
            item.x = fVar1;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (this_00,item,pMVar4->klass->rgctx_data[0xe].method);
code_?:
            pRVar11 = RectEx::RectEx_FromPoints
                               ((Rect *)&stack0xffffffe8,
                                (IEnumerable_1_UnityEngine_Vector2_ *)this_00,(MethodInfo *)0x0);
            fVar1 = pRVar11->m_YMin;
            fVar2 = pRVar11->m_Width;
            fVar10 = pRVar11->m_Height;
            __return_storage_ptr__->m_XMin = pRVar11->m_XMin;
            __return_storage_ptr__->m_YMin = fVar1;
            __return_storage_ptr__->m_Width = fVar2;
            __return_storage_ptr__->m_Height = fVar10;
            return __return_storage_ptr__;
          }
          (this_00->fields)._size = uVar9 + 1;
          if (uVar9 < pVVar8->max_length) {
            pVVar8->vector[uVar9].x = fVar1;
            pVVar8->vector[uVar9].y = fVar10;
            goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pRVar11 = (Rect *)(*pcVar12)();
  return pRVar11;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_RenderArea
               (ConeShape2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar4 = VVar3.x;
  pLVar5 = (List_1_UnityEngine_Vector2_ *)(fVar1 - in_stack_6 * (this->fields)._baseRadius);
  method_00 = (MethodInfo *)(fVar2 - VVar3.y * (this->fields)._baseRadius);
  this_00 = (List_1_UnityEngine_Vector2_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_CentralAxis(this,(MethodInfo *)0x0);
  pMVar7 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar8 = (this->fields)._height;
  pMVar9 = (MethodInfo *)(fVar1 + fVar4 * (this->fields)._height);
  if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar10 = &(this_00->fields)._version;
    *piVar10 = *piVar10 + 1;
    pVVar11 = (this_00->fields)._items;
    if (pVVar11 != (Vector2__Array *)0x0) {
      uVar12 = (this_00->fields)._size;
      if (uVar12 < pVVar11->max_length) {
        (this_00->fields)._size = uVar12 + 1;
        if (pVVar11->max_length <= uVar12) goto code_?;
        pVVar11->vector[uVar12].x = (float)pMVar9;
        pVVar11->vector[uVar12].y = fVar2 + VVar3.y * fVar8;
      }
      else {
        method_00 = pMVar7->klass->rgctx_data[0xe].method;
        VVar3.y = (float)method_00;
        VVar3.x = (float)method_00;
        pLVar5 = this_00;
        pMVar9 = method_00;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(this_00,VVar3,method_00);
      }
      fVar1 = (this->fields)._baseCenter.y;
      VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar2 = (float)pMVar9 * (this->fields)._baseRadius + 0.0;
      pCVar13 = (Camera *)(fVar1 + VVar3.y * (this->fields)._baseRadius);
      piVar10 = &(this_00->fields)._version;
      *piVar10 = *piVar10 + 1;
      pVVar11 = (this_00->fields)._items;
      if (pVVar11 != (Vector2__Array *)0x0) {
        uVar12 = (this_00->fields)._size;
        if (pVVar11->max_length <= uVar12) {
          item.y = (float)pCVar13;
          item.x = fVar2;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (this_00,item,pMVar7->klass->rgctx_data[0xe].method);
          camera = pCVar13;
          pMStack14 = method_00;
code_?:
          origin.y = (float)pMStack14;
          origin.x = (float)pLVar5;
          GLRenderer::GLRenderer_DrawTriangleFan2D_1(origin,this_00,camera,(MethodInfo *)0x0);
          return;
        }
        (this_00->fields)._size = uVar12 + 1;
        if (uVar12 < pVVar11->max_length) {
          pVVar11->vector[uVar12].x = fVar2;
          pVVar11->vector[uVar12].y = (float)pCVar13;
          pMStack14 = method_00;
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_RenderBorder
               (ConeShape2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector2_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  pMVar4 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar5 = (this->fields)._baseRadius;
  pMVar6 = (MethodInfo *)(fVar1 - in_stack_7 * (this->fields)._baseRadius);
  if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar8 = &(this_00->fields)._version;
    *piVar8 = *piVar8 + 1;
    pVVar9 = (this_00->fields)._items;
    if (pVVar9 != (Vector2__Array *)0x0) {
      uVar10 = (this_00->fields)._size;
      if (uVar10 < pVVar9->max_length) {
        (this_00->fields)._size = uVar10 + 1;
        if (pVVar9->max_length <= uVar10) goto code_?;
        pVVar9->vector[uVar10].x = (float)pMVar6;
        pVVar9->vector[uVar10].y = fVar2 - VVar3.y * fVar5;
      }
      else {
        pMVar6 = pMVar4->klass->rgctx_data[0xe].method;
        VVar3.y = (float)pMVar6;
        VVar3.x = (float)pMVar6;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(this_00,VVar3,pMVar6);
      }
      fVar1 = (this->fields)._baseCenter.y;
      VVar3 = ConeShape2D_get_CentralAxis(this,(MethodInfo *)0x0);
      pMVar4 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar2 = (float)pMVar6 * (this->fields)._height + 0.0;
      pCVar11 = (Camera *)(fVar1 + VVar3.y * (this->fields)._height);
      piVar8 = &(this_00->fields)._version;
      *piVar8 = *piVar8 + 1;
      pVVar9 = (this_00->fields)._items;
      if (pVVar9 != (Vector2__Array *)0x0) {
        uVar10 = (this_00->fields)._size;
        if (uVar10 < pVVar9->max_length) {
          (this_00->fields)._size = uVar10 + 1;
          if (pVVar9->max_length <= uVar10) goto code_?;
          pVVar9->vector[uVar10].x = fVar2;
          pVVar9->vector[uVar10].y = (float)pCVar11;
        }
        else {
          item.y = (float)pCVar11;
          item.x = fVar2;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (this_00,item,pMVar4->klass->rgctx_data[0xe].method);
          camera = pCVar11;
        }
        fVar1 = (this->fields)._baseCenter.x;
        fVar5 = (this->fields)._baseCenter.y;
        VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
        pMVar6 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar1 = fVar1 + fVar2 * (this->fields)._baseRadius;
        fVar5 = fVar5 + VVar3.y * (this->fields)._baseRadius;
        piVar8 = &(this_00->fields)._version;
        *piVar8 = *piVar8 + 1;
        pVVar9 = (this_00->fields)._items;
        if (pVVar9 != (Vector2__Array *)0x0) {
          uVar10 = (this_00->fields)._size;
          if (pVVar9->max_length <= uVar10) {
            item_00.y = fVar5;
            item_00.x = fVar1;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (this_00,item_00,pMVar6->klass->rgctx_data[0xe].method);
            GLRenderer::GLRenderer_DrawLineLoop2D(this_00,camera,(MethodInfo *)0x0);
            return;
          }
          (this_00->fields)._size = uVar10 + 1;
          if (uVar10 < pVVar9->max_length) {
            pVVar9->vector[uVar10].x = fVar1;
            pVVar9->vector[uVar10].y = fVar5;
            GLRenderer::GLRenderer_DrawLineLoop2D(this_00,camera,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* ConeShape2D() */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D__ctor(ConeShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._baseCenter.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._baseCenter.y = fVar1;
  (this->fields)._baseRadius = 15.0;
  (this->fields)._height = 15.0;
  return;
}


/* Vector2 get_BaseLeft() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_BaseLeft
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  VStack_4.y = VVar3.y;
  VStack_4.y = fVar2 - VStack_4.y * (this->fields)._baseRadius;
  VStack_4.x = fVar1 - VStack_4.x * (this->fields)._baseRadius;
  return VStack_4;
}


/* Vector2 get_BaseRight() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_BaseRight
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  VStack_4.y = VVar3.y;
  VStack_4.y = fVar2 + VStack_4.y * (this->fields)._baseRadius;
  VStack_4.x = fVar1 + VStack_4.x * (this->fields)._baseRadius;
  return VStack_4;
}


/* Vector2 get_CentralAxis() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_CentralAxis
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffd0,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar1 = pQVar2->x;
  VStack_3.x = pQVar2->y;
  VStack_3.y = pQVar2->z;
  VStack_3.z = pQVar2->w;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation.y = VStack_3.x;
  rotation.x = fVar1;
  rotation.z = VStack_3.y;
  rotation.w = VStack_3.z;
  point.z = 0.0;
  point.x = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  point.y = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_3,rotation,point,(MethodInfo *)0x0);
  VVar5.x = pVVar4->x;
  VVar5.y = pVVar4->y;
  return VVar5;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Right
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffdc,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  puVar3 = (undefined *)pQVar2->x;
  fVar1 = pQVar2->z;
  fVar4 = pQVar2->w;
  if (cRam_? == '\0') {
    puVar3 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  rotation.y = 0.0;
  rotation.x = (float)puVar3;
  rotation.z = fVar1;
  rotation.w = fVar4;
  point.z = 0.0;
  point.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  point.y = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xfffffff0,rotation,point,(MethodInfo *)0x0);
  VVar6.x = pVVar5->x;
  VVar6.y = pVVar5->y;
  return VVar6;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Rotation
          (Quaternion *__return_storage_ptr__,ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_3,fVar1,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                      (MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar4 = pQVar2->z;
  fVar5 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Vector2 get_Tip() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Tip
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_CentralAxis(this,(MethodInfo *)0x0);
  VStack_4.y = VVar3.y;
  VStack_4.y = fVar2 + VStack_4.y * (this->fields)._height;
  VStack_4.x = fVar1 + VStack_4.x * (this->fields)._height;
  return VStack_4;
}


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Up
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffdc,fVar1,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  puVar3 = (undefined *)pQVar2->x;
  fVar1 = pQVar2->z;
  fVar4 = pQVar2->w;
  if (cRam_? == '\0') {
    puVar3 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  rotation.y = 0.0;
  rotation.x = (float)puVar3;
  rotation.z = fVar1;
  rotation.w = fVar4;
  point.z = 0.0;
  point.x = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  point.y = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xfffffff0,rotation,point,(MethodInfo *)0x0);
  VVar6.x = pVVar5->x;
  VVar6.y = pVVar5->y;
  return VVar6;
}


/* Void set_BaseLeft(Vector2) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_BaseLeft
               (ConeShape2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fStack_2 = VVar1.y;
  fVar3 = (this->fields)._baseRadius;
  (this->fields)._baseCenter.x = value.x + fStack_4 * (this->fields)._baseRadius;
  (this->fields)._baseCenter.y = value.y + fStack_2 * fVar3;
  return;
}


/* Void set_BaseRight(Vector2) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_BaseRight
               (ConeShape2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fStack_2 = VVar1.y;
  fVar3 = (this->fields)._baseRadius;
  (this->fields)._baseCenter.x = value.x - fStack_4 * (this->fields)._baseRadius;
  (this->fields)._baseCenter.y = value.y - fStack_2 * fVar3;
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_RotationDegrees
               (ConeShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)value);
  (this->fields)._rotationDegrees = (float)fVar1;
  return;
}


/* Void set_Tip(Vector2) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_Tip
               (ConeShape2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = ConeShape2D_get_CentralAxis(this,(MethodInfo *)0x0);
  fStack_2 = VVar1.y;
  fVar3 = (this->fields)._height;
  (this->fields)._baseCenter.x = value.x - fStack_4 * (this->fields)._height;
  (this->fields)._baseCenter.y = value.y - fStack_2 * fVar3;
  return;
}

