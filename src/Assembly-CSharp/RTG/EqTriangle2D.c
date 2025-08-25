
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_ContainsPoint
               (EqTriangle2D *this,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector2__Array *)0x0) {
    if (pVVar1->max_length == 0) goto code_?;
    p0 = pVVar1->vector[0];
    if ((this->fields)._arePointsDirty != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar1 = (this->fields)._points;
    if (pVVar1 != (Vector2__Array *)0x0) {
      if (pVVar1->max_length < 2) goto code_?;
      p1 = pVVar1->vector[1];
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar1 = (this->fields)._points;
      if (pVVar1 != (Vector2__Array *)0x0) {
        if (2 < pVVar1->max_length) {
          p2 = pVVar1->vector[2];
          epsilon = (this->fields)._epsilon;
          if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__RTG__TriangleMath);
          }
          bVar2 = TriangleMath::TriangleMath_Contains2DPoint
                            (point,p0,p1,p2,epsilon,(MethodInfo *)0x0);
          return bVar2;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Vector2 GetEdge(EqTriangleEdge) */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetEdge
                  (EqTriangle2D *this,EqTriangleEdge__Enum edge,MethodInfo *method)

{
  bVar1 = (this->fields)._arePointsDirty;
  if (edge == EqTriangleEdge__Enum_LeftTop) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (pVVar2->max_length < 2) goto code_?;
      fVar3 = pVVar2->vector[1].x;
      fVar4 = pVVar2->vector[1].y;
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar2 = (this->fields)._points;
      if (pVVar2 != (Vector2__Array *)0x0) {
        if (pVVar2->max_length != 0) {
          fVar3 = fVar3 - pVVar2->vector[0].x;
          fVar4 = fVar4 - pVVar2->vector[0].y;
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  else if (edge == EqTriangleEdge__Enum_TopRight) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (pVVar2->max_length < 3) goto code_?;
      fVar3 = pVVar2->vector[2].x;
      fVar4 = pVVar2->vector[2].y;
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar2 = (this->fields)._points;
      if (pVVar2 != (Vector2__Array *)0x0) {
        if (1 < pVVar2->max_length) {
          fVar3 = fVar3 - pVVar2->vector[1].x;
          fVar4 = fVar4 - pVVar2->vector[1].y;
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  else {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (pVVar2->max_length == 0) goto code_?;
      fVar3 = pVVar2->vector[0].x;
      fVar4 = pVVar2->vector[0].y;
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar2 = (this->fields)._points;
      if (pVVar2 != (Vector2__Array *)0x0) {
        if (2 < pVVar2->max_length) {
          fVar3 = fVar3 - pVVar2->vector[2].x;
          fVar4 = fVar4 - pVVar2->vector[2].y;
code_?:
          VVar5.y = fVar4;
          VVar5.x = fVar3;
          return VVar5;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar6)();
  return VVar5;
}


/* Vector2 GetEdgeMidPoint(EqTriangleEdge) */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetEdgeMidPoint
                  (EqTriangle2D *this,EqTriangleEdge__Enum edge,MethodInfo *method)

{
  bVar1 = (this->fields)._arePointsDirty;
  if (edge == EqTriangleEdge__Enum_LeftTop) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (pVVar2->max_length == 0) goto code_?;
      fStack_3 = pVVar2->vector[0].y;
      edge_00 = EqTriangleEdge__Enum_LeftTop;
      fVar4 = pVVar2->vector[0].x;
code_?:
      edge = (EqTriangleEdge__Enum)fVar4;
      VStack_5 = EqTriangle2D_GetEdge(this,edge_00,(MethodInfo *)0x0);
      uVar6 = func_?(&VStack_5,0);
      VVar7.y = (float)((ulonglong)uVar6 >> 0x20) * _UNK_? + fStack_3;
      VVar7.x = (float)uVar6 * _UNK_? + (float)edge;
      return VVar7;
    }
  }
  else if (edge == EqTriangleEdge__Enum_TopRight) {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (pVVar2->max_length < 2) goto code_?;
      fStack_3 = pVVar2->vector[1].y;
      edge_00 = EqTriangleEdge__Enum_TopRight;
      fVar4 = pVVar2->vector[1].x;
      goto code_?;
    }
  }
  else {
    if (bVar1 != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector2__Array *)0x0) {
      if (2 < pVVar2->max_length) {
        fStack_3 = pVVar2->vector[2].y;
        fVar4 = pVVar2->vector[2].x;
        edge_00 = edge;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  VVar7 = (Vector2)(*pcVar8)();
  return VVar7;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,EqTriangle2D *this,MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pRVar1 = RectEx::RectEx_FromPoints
                     ((Rect *)&stack0xffffffec,
                      (IEnumerable_1_UnityEngine_Vector2_ *)(this->fields)._points,(MethodInfo *)0x0
                     );
  fVar2 = pRVar1->m_YMin;
  fVar3 = pRVar1->m_Width;
  fVar4 = pRVar1->m_Height;
  __return_storage_ptr__->m_XMin = pRVar1->m_XMin;
  __return_storage_ptr__->m_YMin = fVar2;
  __return_storage_ptr__->m_Width = fVar3;
  __return_storage_ptr__->m_Height = fVar4;
  return __return_storage_ptr__;
}


/* Vector2 GetPoint(EqTrianglePoint) */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_GetPoint
                  (EqTriangle2D *this,EqTrianglePoint__Enum point,MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?();
  }
  else if (point < pVVar1->max_length) {
    VVar2.y = pVVar1->vector[point].y;
    VVar2.x = pVVar1->vector[point].x;
    return VVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  VVar2 = (Vector2)(*pcVar3)();
  return VVar2;
}


/* Void OnPointsFoundDirty() */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_OnPointsFoundDirty
               (EqTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  VVar1 = (this->fields)._centroid;
  sideLength = (this->fields)._sideLength;
  fVar2 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffe0,fVar2,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar2 = pQVar3->x;
  puVar4 = (undefined *)pQVar3->y;
  pTVar5 = (TriangleMath__Class *)pQVar3->z;
  fVar6 = pQVar3->w;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    puVar4 = &UNK_?;
    pTVar5 = TypeInfo__RTG__TriangleMath;
    func_?();
  }
  rotation.y = (float)puVar4;
  rotation.x = fVar2;
  rotation.z = (float)pTVar5;
  rotation.w = fVar6;
  this_00 = TriangleMath::TriangleMath_CalcEqTriangle2DPoints
                      (VVar1,sideLength,rotation,(MethodInfo *)0x0);
  pVVar7 = (this->fields)._points;
  if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
    VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    if (pVVar7 != (Vector2__Array *)0x0) {
      if (pVVar7->max_length == 0) goto code_?;
      fStack_8 = VVar1.x;
      pVVar7->vector[0].x = fStack_8;
      fStack_9 = VVar1.y;
      pVVar7->vector[0].y = fStack_9;
      pVVar7 = (this->fields)._points;
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      if (pVVar7 != (Vector2__Array *)0x0) {
        if (pVVar7->max_length < 2) goto code_?;
        fStack_8 = VVar1.x;
        pVVar7->vector[1].x = fStack_8;
        fStack_9 = VVar1.y;
        pVVar7->vector[1].y = fStack_9;
        pVVar7 = (this->fields)._points;
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this_00,2,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        if (pVVar7 != (Vector2__Array *)0x0) {
          if (2 < pVVar7->max_length) {
            fStack_8 = VVar1.x;
            pVVar7->vector[2].x = fStack_8;
            fStack_9 = VVar1.y;
            pVVar7->vector[2].y = fStack_9;
            (this->fields)._arePointsDirty = 0;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_RenderArea
               (EqTriangle2D *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector2__Array *)0x0) {
    if (pVVar1->max_length == 0) goto code_?;
    origin = pVVar1->vector[0];
    this_00 = (List_1_UnityEngine_Vector2_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    if ((this->fields)._arePointsDirty != 0) {
      EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
    pVVar1 = (this->fields)._points;
    if (pVVar1 != (Vector2__Array *)0x0) {
      if (pVVar1->max_length < 2) goto code_?;
      fVar3 = pVVar1->vector[1].x;
      fVar4 = pVVar1->vector[1].y;
      VVar5 = pVVar1->vector[1];
      if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
        piVar6 = &(this_00->fields)._version;
        *piVar6 = *piVar6 + 1;
        pVVar1 = (this_00->fields)._items;
        if (pVVar1 != (Vector2__Array *)0x0) {
          uVar7 = (this_00->fields)._size;
          if (uVar7 < pVVar1->max_length) {
            (this_00->fields)._size = uVar7 + 1;
            if (pVVar1->max_length <= uVar7) goto code_?;
            pVVar1->vector[uVar7].x = fVar3;
            pVVar1->vector[uVar7].y = fVar4;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (this_00,VVar5,pMVar2->klass->rgctx_data[0xe].method);
          }
          if ((this->fields)._arePointsDirty != 0) {
            EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
          }
          pMVar2 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          pVVar1 = (this->fields)._points;
          if (pVVar1 != (Vector2__Array *)0x0) {
            if (pVVar1->max_length < 3) goto code_?;
            fVar3 = pVVar1->vector[2].x;
            fVar4 = pVVar1->vector[2].y;
            VVar5 = pVVar1->vector[2];
            piVar6 = &(this_00->fields)._version;
            *piVar6 = *piVar6 + 1;
            pVVar1 = (this_00->fields)._items;
            if (pVVar1 != (Vector2__Array *)0x0) {
              uVar7 = (this_00->fields)._size;
              if (uVar7 < pVVar1->max_length) {
                (this_00->fields)._size = uVar7 + 1;
                if (pVVar1->max_length <= uVar7) goto code_?;
                pVVar1->vector[uVar7].x = fVar3;
                pVVar1->vector[uVar7].y = fVar4;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          (this_00,VVar5,pMVar2->klass->rgctx_data[0xe].method);
              }
              GLRenderer::GLRenderer_DrawTriangleFan2D_1(origin,this_00,camera,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_RenderBorder
               (EqTriangle2D *this,Camera *camera,MethodInfo *method)

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
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  pVVar2 = (this->fields)._points;
  if (pVVar2 != (Vector2__Array *)0x0) {
    if (pVVar2->max_length == 0) goto code_?;
    fVar3 = pVVar2->vector[0].x;
    fVar4 = pVVar2->vector[0].y;
    if (this_00 != (List_1_UnityEngine_Vector2_ *)0x0) {
      piVar5 = &(this_00->fields)._version;
      *piVar5 = *piVar5 + 1;
      pVVar2 = (this_00->fields)._items;
      if (pVVar2 != (Vector2__Array *)0x0) {
        uVar6 = (this_00->fields)._size;
        if (uVar6 < pVVar2->max_length) {
          (this_00->fields)._size = uVar6 + 1;
          if (pVVar2->max_length <= uVar6) goto code_?;
          pVVar2->vector[uVar6].x = fVar3;
          pVVar2->vector[uVar6].y = fVar4;
        }
        else {
          pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
          item.y = fVar4;
          item.x = (float)pMVar1;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize(this_00,item,pMVar1);
        }
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        pVVar2 = (this->fields)._points;
        if (pVVar2 != (Vector2__Array *)0x0) {
          if (pVVar2->max_length < 2) goto code_?;
          fVar3 = pVVar2->vector[1].x;
          fVar4 = pVVar2->vector[1].y;
          piVar5 = &(this_00->fields)._version;
          *piVar5 = *piVar5 + 1;
          pVVar2 = (this_00->fields)._items;
          if (pVVar2 != (Vector2__Array *)0x0) {
            uVar6 = (this_00->fields)._size;
            if (uVar6 < pVVar2->max_length) {
              (this_00->fields)._size = uVar6 + 1;
              if (pVVar2->max_length <= uVar6) goto code_?;
              pVVar2->vector[uVar6].x = fVar3;
              pVVar2->vector[uVar6].y = fVar4;
            }
            else {
              pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
              item_00.y = fVar4;
              item_00.x = (float)pMVar1;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize(this_00,item_00,pMVar1);
            }
            if ((this->fields)._arePointsDirty != 0) {
              EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
            }
            pMVar1 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
            ;
            pVVar2 = (this->fields)._points;
            if (pVVar2 != (Vector2__Array *)0x0) {
              if (pVVar2->max_length < 3) goto code_?;
              fVar3 = pVVar2->vector[2].x;
              fVar4 = pVVar2->vector[2].y;
              piVar5 = &(this_00->fields)._version;
              *piVar5 = *piVar5 + 1;
              pVVar2 = (this_00->fields)._items;
              if (pVVar2 != (Vector2__Array *)0x0) {
                uVar6 = (this_00->fields)._size;
                if (uVar6 < pVVar2->max_length) {
                  (this_00->fields)._size = uVar6 + 1;
                  if (pVVar2->max_length <= uVar6) goto code_?;
                  pVVar2->vector[uVar6].x = fVar3;
                  pVVar2->vector[uVar6].y = fVar4;
                }
                else {
                  pMVar1 = pMVar1->klass->rgctx_data[0xe].method;
                  item_01.y = fVar4;
                  item_01.x = (float)pMVar1;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__AddWithResize(this_00,item_01,pMVar1);
                }
                GLRenderer::GLRenderer_DrawLineLoop2D(this_00,camera,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetPoint(EqTrianglePoint, Vector2) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_SetPoint
               (EqTriangle2D *this,EqTrianglePoint__Enum point,Vector2 pointValue,MethodInfo *method
               )

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle2D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector2__Array *)0x0) {
    if (pVVar1->max_length <= point) goto code_?;
    fVar2 = pointValue.x - pVVar1->vector[point].x;
    fVar3 = pointValue.y - pVVar1->vector[point].y;
    if (pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = pVVar1->vector[0].x + fVar2;
    pVVar1->vector[0].y = pVVar1->vector[0].y + fVar3;
    pVVar1 = (this->fields)._points;
    if (pVVar1 != (Vector2__Array *)0x0) {
      if (pVVar1->max_length < 2) goto code_?;
      fVar4 = pVVar1->vector[1].y;
      pVVar1->vector[1].x = pVVar1->vector[1].x + fVar2;
      pVVar1->vector[1].y = fVar4 + fVar3;
      pVVar1 = (this->fields)._points;
      if (pVVar1 != (Vector2__Array *)0x0) {
        if (2 < pVVar1->max_length) {
          fVar4 = pVVar1->vector[2].y;
          pVVar1->vector[2].x = pVVar1->vector[2].x + fVar2;
          pVVar1->vector[2].y = fVar4 + fVar3;
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* EqTriangle2D() */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D__ctor
               (EqTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  (this->fields)._sideLength = 1.0;
  pVVar1 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,3);
  (this->fields)._points = pVVar1;
  func_?(&(this->fields)._points,pVVar1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._centroid.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._centroid.y = fVar2;
  (this->fields)._arePointsDirty = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Single get_Altitude() */

float Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Altitude
                (EqTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  return TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor * fVar1;
}


/* Single get_CentroidAltitude() */

float Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_CentroidAltitude
                (EqTriangle2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  return (TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor * fVar1) / _UNK_?;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Right
                  (EqTriangle2D *this,MethodInfo *method)

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
Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Rotation
          (Quaternion *__return_storage_ptr__,EqTriangle2D *this,MethodInfo *method)

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


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_get_Up
                  (EqTriangle2D *this,MethodInfo *method)

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


/* Void set_AreaEps(Single) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_set_AreaEps
               (EqTriangle2D *this,float value,MethodInfo *method)

{
  Object2ObjectSnap+Config::Object2ObjectSnap_Config_set_AreaMatchEps
            ((Object2ObjectSnap_Config *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_Centroid(Vector2) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_set_Centroid
               (EqTriangle2D *this,Vector2 value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  fVar2 = value.x - (this->fields)._centroid.x;
  fVar3 = value.y - (this->fields)._centroid.y;
  pVVar4 = (this->fields)._points;
  (this->fields)._centroid.x = value.x;
  (this->fields)._centroid.y = value.y;
  if (pVVar4 != (Vector2__Array *)0x0) {
    if (pVVar4->max_length != 0) {
      pVVar4->vector[0].x = fVar2 + pVVar4->vector[0].x;
      pVVar4->vector[0].y = pVVar4->vector[0].y + fVar3;
      pVVar4 = (this->fields)._points;
      if (pVVar4 == (Vector2__Array *)0x0) goto code_?;
      if (1 < pVVar4->max_length) {
        fVar5 = pVVar4->vector[1].y;
        pVVar4->vector[1].x = pVVar4->vector[1].x + fVar2;
        pVVar4->vector[1].y = fVar5 + fVar3;
        pVVar4 = (this->fields)._points;
        if (pVVar4 == (Vector2__Array *)0x0) goto code_?;
        if (2 < pVVar4->max_length) {
          fVar5 = pVVar4->vector[2].y;
          pVVar4->vector[2].x = pVVar4->vector[2].x + fVar2;
          pVVar4->vector[2].y = fVar5 + fVar3;
          return;
        }
      }
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_6 = (undefined *)func_?();
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  uVar8 = func_?(&puStack_9);
  func_?(uVar8);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_SideLength(Single) */

void Assembly-CSharp.dll::RTG::EqTriangle2D::EqTriangle2D_set_SideLength
               (EqTriangle2D *this,float value,MethodInfo *method)

{
  (this->fields)._sideLength = (float)((uint)value & _UNK_?);
  (this->fields)._arePointsDirty = 1;
  return;
}

