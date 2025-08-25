
/* Boolean ContainsAllPoints(Rect, IEnumerable`1[UnityEngine.Vector2]) */

bool Assembly-CSharp.dll::RTG::RectEx::RectEx_ContainsAllPoints
               (Rect rect,IEnumerable_1_UnityEngine_Vector2_ *points,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  if (points != (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    iVar4 = func_?(0,
                            TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>
                            ,points);
    uStack_1 = 1;
    while (iVar4 != 0) {
      cVar5 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar4);
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        if (iVar4 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar4);
        }
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if (iVar4 == 0) break;
      uVar6 = func_?(0,
                              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>
                              ,iVar4);
      fVar7 = (float)((ulonglong)uVar6 >> 0x20);
      fVar8 = (float)uVar6;
      if (((0.0 <= rect.m_Width) || (rect.m_XMin < fVar8)) || (fVar8 <= rect.m_Width + rect.m_XMin))
      {
        if ((rect.m_Width < 0.0) || (fVar8 < rect.m_XMin)) {
          bVar9 = false;
        }
        else {
          bVar9 = fVar8 < rect.m_Width + rect.m_XMin;
        }
      }
      else {
        bVar9 = true;
      }
      if (((0.0 <= rect.m_Height) || (rect.m_YMin < fVar7)) ||
         (fVar7 <= rect.m_Height + rect.m_YMin)) {
        if ((rect.m_Height < 0.0) || (fVar7 < rect.m_YMin)) {
          bVar10 = false;
        }
        else {
          bVar10 = fVar7 < rect.m_Height + rect.m_YMin;
        }
      }
      else {
        bVar10 = true;
      }
      if (!(bool)(bVar10 & bVar9)) {
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Rect FromCenterAndSize(Vector2, Vector2) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_FromCenterAndSize
                 (Rect *__return_storage_ptr__,Vector2 center,Vector2 size,MethodInfo *method)

{
  fVar1 = size.x * _UNK_?;
  fVar2 = size.y * _UNK_?;
  __return_storage_ptr__->m_Width = size.x;
  __return_storage_ptr__->m_Height = size.y;
  __return_storage_ptr__->m_XMin = center.x - fVar1;
  __return_storage_ptr__->m_YMin = center.y - fVar2;
  return __return_storage_ptr__;
}


/* Rect FromPoints(IEnumerable`1[UnityEngine.Vector2]) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_FromPoints
                 (Rect *__return_storage_ptr__,IEnumerable_1_UnityEngine_Vector2_ *points,
                 MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  fStack_4 = _UNK_?;
  fStack_5 = _UNK_?;
  fStack_6 = _UNK_?;
  __return_storage_ptr__->m_XMin = 0.0;
  __return_storage_ptr__->m_YMin = 0.0;
  __return_storage_ptr__->m_Width = 0.0;
  __return_storage_ptr__->m_Height = 0.0;
  fStack_7 = fStack_4;
  if (points != (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    piVar8 = (int *)func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>
                                    ,points);
    uStack_1 = 1;
    while (piVar8 != (int *)0x0) {
      cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar8);
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar8 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piVar8);
        }
        __return_storage_ptr__->m_XMin = fStack_6;
        __return_storage_ptr__->m_YMin = fStack_5;
        __return_storage_ptr__->m_Width = fStack_4 - fStack_6;
        __return_storage_ptr__->m_Height = fStack_7 - fStack_5;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      if (piVar8 == (int *)0x0) break;
      iVar10 = *piVar8;
      uVar11 = 0;
      if (*(ushort *)(iVar10 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector2___Class **)
               (*(int *)(iVar10 + 0x58) + (uint)uVar11 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>) {
            puVar12 = (undefined4 *)
                     (iVar10 + (*(int *)(*(int *)(iVar10 + 0x58) + 4 + (uint)uVar11 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(iVar10 + 0xb6));
      }
      puVar12 = (undefined4 *)
               func_?(piVar8,
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>
                               ,0);
code_?:
      uVar13 = (*(code *)*puVar12)(piVar8,puVar12[1]);
      fVar14 = (float)((ulonglong)uVar13 >> 0x20);
      fVar15 = (float)uVar13;
      if (fVar15 < fStack_6) {
        fStack_6 = fVar15;
      }
      if (fVar14 < fStack_5) {
        fStack_5 = fVar14;
      }
      if (fStack_4 < fVar15) {
        fStack_4 = fVar15;
      }
      if (fStack_7 < fVar14) {
        fStack_7 = fVar14;
      }
    }
  }
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  pRVar18 = (Rect *)(*pcVar17)();
  return pRVar18;
}


/* Rect FromTexture2D(Texture2D) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_FromTexture2D
                 (Rect *__return_storage_ptr__,Texture2D *texture2D,MethodInfo *method)

{
  if (texture2D != (Texture2D *)0x0) {
    iVar1 = (*(code *)(texture2D->klass->vtable).get_width.method)
                      (texture2D,(texture2D->klass->vtable).set_width.methodPtr);
    iVar2 = (*(code *)(texture2D->klass->vtable).get_height.method)
                      (texture2D,(texture2D->klass->vtable).set_height.methodPtr);
    __return_storage_ptr__->m_XMin = 0.0;
    __return_storage_ptr__->m_YMin = 0.0;
    __return_storage_ptr__->m_Width = (float)iVar1;
    __return_storage_ptr__->m_Height = (float)iVar2;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pRVar4 = (Rect *)(*pcVar3)();
  return pRVar4;
}


/* List`1[UnityEngine.Vector2] GetCornerPoints(Rect) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::RectEx::RectEx_GetCornerPoints(Rect rect,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector2_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    pVVar4 = (pLVar1->fields)._items;
    if (pVVar4 != (Vector2__Array *)0x0) {
      uVar5 = (pLVar1->fields)._size;
      if (uVar5 < pVVar4->max_length) {
        (pLVar1->fields)._size = uVar5 + 1;
        if (pVVar4->max_length <= uVar5) goto code_?;
        pVVar4->vector[uVar5].x = rect.m_XMin;
        pVVar4->vector[uVar5].y = rect.m_YMin + rect.m_Height;
      }
      else {
        item.y = rect.m_YMin + rect.m_Height;
        item.x = rect.m_XMin;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize(pLVar1,item,pMVar2->klass->rgctx_data[0xe].method)
        ;
      }
      pMVar2 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      piVar3 = &(pLVar1->fields)._version;
      *piVar3 = *piVar3 + 1;
      pVVar4 = (pLVar1->fields)._items;
      if (pVVar4 != (Vector2__Array *)0x0) {
        uVar5 = (pLVar1->fields)._size;
        if (uVar5 < pVVar4->max_length) {
          (pLVar1->fields)._size = uVar5 + 1;
          if (pVVar4->max_length <= uVar5) goto code_?;
          pVVar4->vector[uVar5].x = rect.m_Width + rect.m_XMin;
          pVVar4->vector[uVar5].y = rect.m_YMin + rect.m_Height;
        }
        else {
          item_00.y = rect.m_YMin + rect.m_Height;
          item_00.x = rect.m_Width + rect.m_XMin;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (pLVar1,item_00,pMVar2->klass->rgctx_data[0xe].method);
        }
        pMVar2 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar3 = &(pLVar1->fields)._version;
        *piVar3 = *piVar3 + 1;
        pVVar4 = (pLVar1->fields)._items;
        if (pVVar4 != (Vector2__Array *)0x0) {
          uVar5 = (pLVar1->fields)._size;
          if (uVar5 < pVVar4->max_length) {
            (pLVar1->fields)._size = uVar5 + 1;
            if (pVVar4->max_length <= uVar5) goto code_?;
            pVVar4->vector[uVar5].x = rect.m_Width + rect.m_XMin;
            pVVar4->vector[uVar5].y = rect.m_YMin;
          }
          else {
            item_01.y = rect.m_YMin;
            item_01.x = rect.m_Width + rect.m_XMin;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar1,item_01,pMVar2->klass->rgctx_data[0xe].method);
          }
          pMVar2 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar3 = &(pLVar1->fields)._version;
          *piVar3 = *piVar3 + 1;
          pVVar4 = (pLVar1->fields)._items;
          if (pVVar4 != (Vector2__Array *)0x0) {
            uVar5 = (pLVar1->fields)._size;
            if (pVVar4->max_length <= uVar5) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (pLVar1,rect._0_8_,pMVar2->klass->rgctx_data[0xe].method);
              return pLVar1;
            }
            (pLVar1->fields)._size = uVar5 + 1;
            if (uVar5 < pVVar4->max_length) {
              pVVar4->vector[uVar5].x = rect.m_XMin;
              pVVar4->vector[uVar5].y = rect.m_YMin;
              return pLVar1;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar6)();
  return pLVar1;
}


/* Rect Inflate(Rect, Single) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_Inflate
                 (Rect *__return_storage_ptr__,Rect rect,float inflateAmount,MethodInfo *method)

{
  if (rect.m_Width < 0.0) {
    fVar1 = rect.m_Width - inflateAmount;
  }
  else {
    fVar1 = rect.m_Width + inflateAmount;
  }
  if (rect.m_Height < 0.0) {
    fVar2 = rect.m_Height - inflateAmount;
  }
  else {
    fVar2 = rect.m_Height + inflateAmount;
  }
  fVar3 = rect.m_Height * _UNK_?;
  fVar4 = fVar2 * _UNK_?;
  __return_storage_ptr__->m_XMin =
       (rect.m_Width * _UNK_? + rect.m_XMin) - fVar1 * _UNK_?;
  __return_storage_ptr__->m_YMin = (fVar3 + rect.m_YMin) - fVar4;
  __return_storage_ptr__->m_Width = fVar1;
  __return_storage_ptr__->m_Height = fVar2;
  return __return_storage_ptr__;
}


/* Rect InvertScreenY(Rect) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_InvertScreenY
                 (Rect *__return_storage_ptr__,Rect rect,MethodInfo *method)

{
  fVar1 = rect.m_Width * _UNK_?;
  fVar2 = rect.m_Height * _UNK_?;
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar4 = rect.m_Height * _UNK_?;
  __return_storage_ptr__->m_XMin = (fVar1 + rect.m_XMin) - rect.m_Width * _UNK_?;
  __return_storage_ptr__->m_YMin = ((float)(iVar3 + -1) - (fVar2 + rect.m_YMin)) - fVar4;
  __return_storage_ptr__->m_Width = rect.m_Width;
  __return_storage_ptr__->m_Height = rect.m_Height;
  return __return_storage_ptr__;
}


/* Rect PlaceBelowCenterHrz(Rect, Rect) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_PlaceBelowCenterHrz
                 (Rect *__return_storage_ptr__,Rect rect,Rect other,MethodInfo *method)

{
  fVar1 = other.m_Height * _UNK_?;
  fVar2 = other.m_Height * _UNK_?;
  fVar3 = rect.m_Height * _UNK_?;
  fVar4 = rect.m_Height * _UNK_?;
  __return_storage_ptr__->m_XMin =
       (other.m_Width * _UNK_? + other.m_XMin) - rect.m_Width * _UNK_?;
  __return_storage_ptr__->m_YMin = (((fVar1 + other.m_YMin) - fVar2) - fVar3) - fVar4;
  __return_storage_ptr__->m_Width = rect.m_Width;
  __return_storage_ptr__->m_Height = rect.m_Height;
  return __return_storage_ptr__;
}

