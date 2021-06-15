
/* String GetNewLine(String, Encoding) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_GetNewLine
                   (String *text,Encoding *encoding,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc0;
  puVar5 = &stack0xffffffc0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = (String *)0x0;
  func_?();
  uStack_7 = 0x78;
  puStack_4 = &stack0xffffffc0;
  iVar8 = func_?(TypeInfo__System__Char,1);
  if (iVar8 != 0) {
    if (*(int *)(iVar8 + 0xc) == 0) {
      uVar9 = func_?(0,0);
      func_?(uVar9);
code_?:
      uVar9 = func_?();
      func_?(uVar9,0,0);
    }
    else {
      *(undefined2 *)(iVar8 + 0x10) = 0x78;
      pSStack_10 = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
      mscorlib.dll::System::IO::StringReader::StringReader__ctor(pSStack_10,text,(MethodInfo *)0x0);
      uStack_1 = 0;
      while (pSStack_10 != (StringReader *)0x0) {
        iVar11 = (*(code *)(pSStack_10->klass->vtable).Read_1.method)
                          (pSStack_10,iVar8,0,1,(pSStack_10->klass->vtable).ReadLine.methodPtr);
        if (iVar11 == 0) {
          iVar8 = 0xb0;
          goto code_?;
        }
        if (iVar8 == 0) break;
        if (*(int *)(iVar8 + 0xc) == 0) goto code_?;
        if (*(short *)(iVar8 + 0x10) == 10) {
          if ((short)uStack_7 == 0xd) {
            iVar8 = 0xcc;
            pSVar6 = StringLiteral_u000Du000A;
          }
          else {
            iVar8 = 0xcc;
            pSVar6 = StringLiteral_u000A;
          }
          goto code_?;
        }
        sVar12 = func_?(0);
        if (sVar12 == 0xd) {
          if ((short)uStack_7 == 0x78) {
            uStack_7 = 0xd;
          }
          else if ((short)uStack_7 == 0xd) {
            iVar8 = 0xcc;
            pSVar6 = StringLiteral_u000D;
code_?:
            uStack_1 = 0xffffffff;
            if (pSStack_10 != (StringReader *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,pSStack_10);
            }
            if (iVar8 == 0xcc) {
              *unaff_FS_OFFSET = uStack_3;
              return pSVar6;
            }
            if ((short)uStack_7 != 0x78) {
              pSVar6 = (String *)func_?(&uStack_7);
              *unaff_FS_OFFSET = uStack_3;
              return pSVar6;
            }
            pSVar6 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return pSVar6;
          }
        }
        else if ((short)uStack_7 != 0x78) {
          pSVar6 = (String *)func_?(&uStack_7,0);
          iVar8 = 0xcc;
          goto code_?;
        }
      }
    }
  }
  uVar9 = func_?(0);
  func_?(uVar9,0,0);
  pcVar13 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar13)();
  return pSVar6;
}


/* Boolean Parse(String) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_Parse
               (CatalogParser *this,String *text,MethodInfo *method)

{
  pVVar1 = (VoxelHit__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar2 = (VoxelHit__Array *)0x0;
  pVVar3 = (VoxelHit__Array *)&stack0xffffff98;
  func_?();
  method_00 = (VoxelHit__Array *)&stack0xffffff98;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (method_00 = (VoxelHit__Array *)&stack0xffffff98,
     (TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
    method_00 = pVVar3;
  }
  pVVar4 = (VoxelHit__Array *)TypeInfo__System__String->static_fields->Empty;
  pVVar3 = (VoxelHit__Array *)TypeInfo__System__Collections__Generic__List<System::String>;
  pVVar5 = pVVar4;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pVVar6 = (VoxelHit__Array *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)pVVar6,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_01 = (VoxelHit__Array *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pVVar7 = (VoxelHit__Array *)0x0;
  this_02 = (VoxelHit__Array *)func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor
            ((StringReader *)this_02,text,(MethodInfo *)0x0);
  if (this_02 != (VoxelHit__Array *)0x0) {
    this_04 = this_02;
    pVVar8 = (VoxelHit__Array *)(*(code *)((Il2CppClass_0 *)&this_02->klass)->image[6].assembly)();
    while( true ) {
      text = (String *)pVVar8;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar9 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pVVar8,TypeInfo__System__String->static_fields->Empty,
                         (MethodInfo *)0x0);
      if (bVar9 == 0) break;
      pVVar8 = (VoxelHit__Array *)(*(code *)((Il2CppClass_0 *)&this_02->klass)->image[6].assembly)()
      ;
    }
    if (pVVar8 != (VoxelHit__Array *)0x0) {
code_?:
      if (pVVar8 != (VoxelHit__Array *)0x0) {
        do {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar10 = pVVar8;
          bVar9 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)pVVar8,::StringLiteral___,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            this_04 = pVVar8;
            bVar9 = mscorlib.dll::System::String::String_op_Equality
                              ((String *)pVVar8,::StringLiteral___,(MethodInfo *)0x0);
            if (bVar9 == 0) goto code_?;
          }
          if (this_02 == (VoxelHit__Array *)0x0) goto code_?;
          pVVar8 = (VoxelHit__Array *)func_?();
          text = (String *)pVVar8;
        } while( true );
      }
      method_00->klass = (VoxelHit__Array__Class *)0x688;
      goto code_?;
    }
code_?:
    method_00->klass = (VoxelHit__Array__Class *)0x68a;
code_?:
    if (this_02 != (VoxelHit__Array *)0x0) {
      func_?();
    }
    if (this_04 == (VoxelHit__Array *)0x0) {
      if ((StringBuilder__Class *)method_00->klass == (StringBuilder__Class *)0x68a) {
        *unaff_FS_OFFSET = pVVar1;
        return 0;
      }
      *unaff_FS_OFFSET = pVVar1;
      return 1;
    }
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
code_?:
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?();
  }
  this_05 = (List_1_UIPushOption_ *)0x0;
  output = (VoxelHit__Array *)&stack0xffffffe4;
  bVar9 = CatalogParser_ReadParam
                    ((String *)pVVar8,StringLiteral____,(String **)output,(MethodInfo *)0x0);
  if (bVar9 != 0) {
    if (this_02 == (VoxelHit__Array *)0x0) goto code_?;
    pVVar6 = (VoxelHit__Array *)0xa;
    this_01 = (VoxelHit__Array *)&UNK_?;
    pVVar4 = this_02;
    pVVar8 = (VoxelHit__Array *)func_?();
    text = (String *)pVVar8;
  }
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pVVar8,StringLiteral____,(String **)&stack0xffffffe4,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) {
code_?:
    if (pVVar6 == (VoxelHit__Array *)0x0) goto code_?;
    pVVar8 = pVVar2;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pVVar6,(UIPushOption__Enum)pVVar2,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    this_04 = pVVar2;
    pVVar2 = pVVar8;
    goto joined_?;
  }
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pVVar8,::StringLiteral___,(String **)&stack0xffffffe4,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) goto code_?;
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pVVar8,StringLiteral____,(String **)&stack0xffffffe4,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) goto joined_?;
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  bVar9 = CatalogParser_ReadParam
                    ((String *)pVVar8,StringLiteral_msgctxt__,(String **)&stack0xffffffe4,
                     (MethodInfo *)0x0);
  if (bVar9 == 0) {
    if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
      func_?(TypeInfo__GNU__Gettext__CatalogParser);
    }
    bVar9 = CatalogParser_ReadParam
                      ((String *)pVVar8,StringLiteral_msgctxtu0009_,(String **)&stack0xffffffe4,
                       (MethodInfo *)0x0);
    if (bVar9 == 0) {
      if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
        func_?();
      }
      bVar9 = CatalogParser_ReadParam
                        ((String *)pVVar8,StringLiteral_msgid__,(String **)&stack0xffffffe4,
                         (MethodInfo *)0x0);
      if (bVar9 == 0) {
        if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
          func_?(TypeInfo__GNU__Gettext__CatalogParser);
        }
        pMVar12 = (MethodInfo *)StringLiteral_msgidu0009_;
        bVar9 = CatalogParser_ReadParam
                          ((String *)pVVar8,StringLiteral_msgidu0009_,(String **)&stack0xffffffe4,
                           (MethodInfo *)0x0);
        if (bVar9 == 0) {
          if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
            func_?(TypeInfo__GNU__Gettext__CatalogParser);
          }
          bVar9 = CatalogParser_ReadParam
                            ((String *)pVVar8,StringLiteral_msgid_plural__,
                             (String **)&stack0xffffffe4,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000
                 ) != 0) && ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
              func_?();
            }
            bVar9 = CatalogParser_ReadParam
                              ((String *)pVVar8,StringLiteral_msgid_pluralu0009_,
                               (String **)&stack0xffffffe4,(MethodInfo *)0x0);
            if (bVar9 == 0) {
              if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                func_?();
              }
              bVar9 = CatalogParser_ReadParam
                                ((String *)pVVar8,StringLiteral_msgstr__,(String **)&stack0xffffffe4
                                 ,(MethodInfo *)0x0);
              cVar13 = (char)((uint)pVVar7 >> 0x18);
              pVVar10 = this_01;
              if (bVar9 == 0) {
                if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                  func_?();
                }
                pVVar3 = (VoxelHit__Array *)&stack0xffffffe4;
                method_01 = (MethodInfo *)&UNK_?;
                bVar9 = CatalogParser_ReadParam
                                  ((String *)pVVar8,StringLiteral_msgstru0009_,(String **)pVVar3,
                                   (MethodInfo *)0x0);
                cVar13 = (char)((uint)pVVar7 >> 0x18);
                pVVar10 = this_01;
                if (bVar9 == 0) {
                  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pMVar14 = (MethodInfo *)0x0;
                  bVar9 = CatalogParser_ReadParam
                                    ((String *)pVVar8,StringLiteral_msgstr_,
                                     (String **)&stack0xffffffe4,(MethodInfo *)0x0);
                  if (bVar9 == 0) {
                    if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                      func_?();
                    }
                    this_04 = (VoxelHit__Array *)&stack0xffffffe4;
                    bVar9 = CatalogParser_ReadParam
                                      ((String *)pVVar8,StringLiteral____,(String **)this_04,
                                       (MethodInfo *)0x0);
                    if (bVar9 == 0) {
                      if ((pVVar8 != (VoxelHit__Array *)0x0) &&
                         (uVar15 = mscorlib.dll::System::String::String_get_Chars
                                            ((String *)pVVar8,0,(MethodInfo *)0x0), uVar15 == 0x23))
                      {
                        do {
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?();
                          }
                          pVVar6 = (VoxelHit__Array *)0x0;
                          this_01 = pVVar8;
                          bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                            ((String *)pVVar8,(MethodInfo *)0x0);
                          if (bVar9 != 0) goto code_?;
                          if (pVVar8 == (VoxelHit__Array *)0x0) goto code_?;
                          pVVar4 = (VoxelHit__Array *)0x0;
                          this_01 = (VoxelHit__Array *)&UNK_?;
                          pVVar6 = pVVar8;
                          uVar15 = mscorlib.dll::System::String::String_get_Chars
                                            ((String *)pVVar8,0,(MethodInfo *)method_00);
                          if (uVar15 == 0x23) {
                            pVVar5 = (VoxelHit__Array *)&UNK_?;
                            pVVar2 = pVVar8;
                            pIVar16 = mscorlib.dll::System::Collections::ObjectModel::
                                     Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                               ((Collection_1_VoxelHit_ *)pVVar8,(MethodInfo *)0x0);
                            if (1 < (int)pIVar16) goto code_?;
                          }
                          else {
code_?:
                            pVVar1 = (VoxelHit__Array *)0x0;
                            pVVar2 = (VoxelHit__Array *)&UNK_?;
                            pVVar7 = pVVar8;
                            uVar15 = mscorlib.dll::System::String::String_get_Chars
                                              ((String *)pVVar8,0,(MethodInfo *)0x0);
                            if (uVar15 != 0x23) goto code_?;
                            pVVar1 = (VoxelHit__Array *)&UNK_?;
                            uVar15 = mscorlib.dll::System::String::String_get_Chars
                                              ((String *)pVVar8,1,(MethodInfo *)0x0);
                            if (uVar15 == 0x2c) goto code_?;
                            text = (String *)0x0;
                            this = (CatalogParser *)0x1;
                            unaff_retaddr = pVVar8;
                            uVar15 = mscorlib.dll::System::String::String_get_Chars
                                              ((String *)pVVar8,1,(MethodInfo *)0x0);
                            if (uVar15 == 0x3a) goto code_?;
                            text = (String *)&UNK_?;
                            method = (MethodInfo *)pVVar8;
                            uVar15 = mscorlib.dll::System::String::String_get_Chars
                                              ((String *)pVVar8,1,(MethodInfo *)0x0);
                            if ((uVar15 == 0x2e) ||
                               (uVar15 = mscorlib.dll::System::String::String_get_Chars
                                                  ((String *)pVVar8,1,(MethodInfo *)0x0),
                               uVar15 == 0x7e)) goto code_?;
                          }
                          if (pVVar5 == (VoxelHit__Array *)0x0) goto code_?;
                          pVVar7 = (VoxelHit__Array *)&UNK_?;
                          pIVar16 = mscorlib.dll::System::Collections::ObjectModel::
                                   Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                             ((Collection_1_VoxelHit_ *)pVVar5,
                                              (MethodInfo *)pVVar1);
                          if (0 < (int)pIVar16) {
                            pVVar2 = (VoxelHit__Array *)func_?();
                            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__System__String->_1).cctor_started == 0)) {
                              func_?();
                            }
                            pVVar5 = (VoxelHit__Array *)&UNK_?;
                            pVVar7 = pVVar8;
                            pVVar8 = (VoxelHit__Array *)
                                     mscorlib.dll::System::String::String_Concat
                                               ((Object *)pVVar2,(Object *)pVVar8,(MethodInfo *)0x0
                                               );
                          }
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?();
                          }
                          pVVar1 = pVVar5;
                          pVVar5 = (VoxelHit__Array *)
                                    mscorlib.dll::System::String::String_Concat_2
                                              ((String *)pVVar5,(String *)pVVar8,(MethodInfo *)0x0)
                          ;
                          if (this_02 == (VoxelHit__Array *)0x0) goto code_?;
                          unaff_retaddr = (VoxelHit__Array *)0xa;
                          pVVar8 = (VoxelHit__Array *)func_?();
                          this = (CatalogParser *)this_02;
                          text = (String *)pVVar8;
                        } while( true );
                      }
                      goto joined_?;
                    }
                    pVVar5 = (VoxelHit__Array *)
                              TypeInfo__System__Collections__Generic__List<System::String>;
                    this_03 = (List_1_VoxelHit_ *)func_?();
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
                    List_1_UnityEngine_Vector4___ctor
                              ((List_1_UnityEngine_Vector4_ *)this_03,
                               MethodInfo__System__Collections__Generic__List<System::String>__List__
                              );
                    if (this_03 == (List_1_VoxelHit_ *)0x0) goto code_?;
                    do {
                      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                      List_1_UIPushOption__Add
                                ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)pVVar8,
                                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                );
                      if (this_02 == (VoxelHit__Array *)0x0) goto code_?;
                      pVVar8 = (VoxelHit__Array *)func_?();
                      text = (String *)pVVar8;
                      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                        func_?();
                      }
                      bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                        ((String *)pVVar8,(MethodInfo *)0x0);
                      this_04 = pVVar4;
                      if (bVar9 != 0) break;
                      if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pVVar3 = pVVar8;
                      bVar9 = CatalogParser_ReadParam
                                        ((String *)pVVar8,StringLiteral____,
                                         (String **)&stack0xffffffe4,(MethodInfo *)0x0);
                      this_04 = pVVar4;
                    } while (bVar9 != 0);
                    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                    List_1_VoxelHit__ToArray
                              (this_03,
                               MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                              );
                    if (pVVar6 == (VoxelHit__Array *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                    List_1_VoxelHit__ToArray
                              ((List_1_VoxelHit_ *)pVVar6,
                               MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                              );
                    cVar13 = func_?();
                    if (cVar13 == '\0') goto code_?;
                    this_04 = pVVar5;
                    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                      func_?();
                      this_04 = pVVar5;
                    }
                    pVVar7 = (VoxelHit__Array *)0x0;
                    pVVar4 = (VoxelHit__Array *)TypeInfo__System__String->static_fields->Empty;
                    if (this_04 == (VoxelHit__Array *)0x0) goto code_?;
                    pVVar5 = pVVar4;
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                    List_1_UnityEngine_UIVertex__Clear
                              ((List_1_UnityEngine_UIVertex_ *)this_04,
                               MethodInfo__System__Collections__Generic__List<System::String>__Clear__
                              );
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                    List_1_UnityEngine_UIVertex__Clear
                              ((List_1_UnityEngine_UIVertex_ *)pVVar6,
                               MethodInfo__System__Collections__Generic__List<System::String>__Clear__
                              );
                    if (this_01 == (VoxelHit__Array *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                    List_1_UnityEngine_UIVertex__Clear
                              ((List_1_UnityEngine_UIVertex_ *)this_01,
                               MethodInfo__System__Collections__Generic__List<System::String>__Clear__
                              );
                    goto code_?;
                  }
                  if ((char)((uint)pVVar7 >> 0x18) != '\0') {
                    if (pVVar2 != (VoxelHit__Array *)0x0) {
                      iVar17 = mscorlib.dll::System::String::String_IndexOf_2
                                        ((String *)pVVar2,0x5d,(MethodInfo *)0x0);
                      this_04 = (VoxelHit__Array *)&UNK_?;
                      pSVar18 = mscorlib.dll::System::String::String_Substring_1
                                         ((String *)pVVar2,iVar17 + -1,1,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pVVar6 = (VoxelHit__Array *)0x0;
                      this_02 = (VoxelHit__Array *)&UNK_?;
                      pLVar19 = (List_1_UnityEngine_UIVertex_ *)StringLiteral_msgstr_;
                      this_01 = (VoxelHit__Array *)::StringLiteral__;
                      pVVar4 = (VoxelHit__Array *)
                                mscorlib.dll::System::String::String_Concat_3
                                          (StringLiteral_msgstr_,pSVar18,::StringLiteral__,
                                           (MethodInfo *)0x0);
                      do {
                        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                             != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                          func_?();
                        }
                        method_00 = pVVar4;
                        pSVar18 = mscorlib.dll::System::String::String_Concat_2
                                           ((String *)pVVar4,::StringLiteral___,(MethodInfo *)0x0);
                        if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr
                             & 0x2000000) != 0) &&
                           ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                          func_?();
                        }
                        pVVar1 = (VoxelHit__Array *)0x0;
                        pVVar2 = pVVar8;
                        bVar9 = CatalogParser_ReadParam
                                          ((String *)pVVar8,pSVar18,(String **)&stack0xffffffe4,
                                           (MethodInfo *)0x0);
                        if (bVar9 == 0) {
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?();
                          }
                          this = (CatalogParser *)
                                 mscorlib.dll::System::String::String_Concat_2
                                           ((String *)pVVar4,StringLiteral_u0009_,(MethodInfo *)0x0
                                           );
                          if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.
                                      methodPtr & 0x2000000) != 0) &&
                             ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                            method = (MethodInfo *)TypeInfo__GNU__Gettext__CatalogParser;
                            text = (String *)&UNK_?;
                            func_?();
                          }
                          method = (MethodInfo *)0x0;
                          text = (String *)&stack0xffffffe4;
                          unaff_retaddr = pVVar8;
                          bVar9 = CatalogParser_ReadParam
                                            ((String *)pVVar8,(String *)this,(String **)text,
                                             (MethodInfo *)0x0);
                          if (bVar9 == 0) goto code_?;
                        }
                        if (pVVar2 == (VoxelHit__Array *)0x0) break;
                        pVVar1 = pVVar2;
                        pIVar16 = mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                           ((Collection_1_VoxelHit_ *)pVVar2,
                                            (MethodInfo *)unaff_retaddr);
                        text = (String *)0x0;
                        unaff_retaddr = (VoxelHit__Array *)0x0;
                        pSVar18 = mscorlib.dll::System::String::String_Substring_1
                                           ((String *)pVVar2,0,
                                            (int32_t)((int)&pIVar16[-1].monitor + 3),
                                            (MethodInfo *)0x0);
                        pVVar4 = (VoxelHit__Array *)func_?();
                        pMVar14 = (MethodInfo *)0x0;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
                                  ((StringBuilder *)pVVar4,pSVar18,(MethodInfo *)0x0);
                        while( true ) {
                          if (this_02 == (VoxelHit__Array *)0x0) goto code_?;
                          this_02 = (VoxelHit__Array *)&UNK_?;
                          pVVar8 = (VoxelHit__Array *)func_?();
                          text = (String *)pVVar8;
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?(TypeInfo__System__String);
                          }
                          bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                            ((String *)pVVar8,(MethodInfo *)0x0);
                          if (bVar9 != 0) goto code_?;
                          if (pVVar8 == (VoxelHit__Array *)0x0) goto code_?;
                          uVar15 = mscorlib.dll::System::String::String_get_Chars
                                            ((String *)pVVar8,0,pMVar12);
                          if (uVar15 == 9) {
                            pMVar12 = (MethodInfo *)&UNK_?;
                            pVVar8 = (VoxelHit__Array *)
                                     mscorlib.dll::System::String::String_Substring
                                               ((String *)pVVar8,1,(MethodInfo *)0x0);
                            text = (String *)pVVar8;
                          }
                          if (pVVar8 == (VoxelHit__Array *)0x0) goto code_?;
                          uVar15 = mscorlib.dll::System::String::String_get_Chars
                                            ((String *)pVVar8,0,method_01);
                          if (uVar15 != 0x22) break;
                          pIVar16 = mscorlib.dll::System::Collections::ObjectModel::
                                   Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                             ((Collection_1_VoxelHit_ *)pVVar8,(MethodInfo *)0x0);
                          pVVar3 = pVVar8;
                          uVar15 = mscorlib.dll::System::String::String_get_Chars
                                            ((String *)pVVar8,
                                             (int32_t)((int)&pIVar16[-1].monitor + 3),
                                             (MethodInfo *)0x0);
                          if (uVar15 != 0x22) break;
                          pIVar16 = mscorlib.dll::System::Collections::ObjectModel::
                                   Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                             ((Collection_1_VoxelHit_ *)pVVar8,(MethodInfo *)0x0);
                          pSVar18 = mscorlib.dll::System::String::String_Substring_1
                                             ((String *)pVVar8,1,
                                              (int32_t)((int)&pIVar16[-1].monitor + 2),
                                              (MethodInfo *)0x0);
                          if (pVVar4 == (VoxelHit__Array *)0x0) goto code_?;
                          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                    ((StringBuilder *)pVVar4,pSVar18,pMVar14);
                        }
                        if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr
                             & 0x2000000) != 0) &&
                           ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
                          func_?();
                        }
                        bVar9 = CatalogParser_ReadParam
                                          ((String *)pVVar8,StringLiteral_msgstr_,
                                           (String **)&stack0xffffffe4,(MethodInfo *)0x0);
                        if (bVar9 != 0) {
                          if (pVVar1 == (VoxelHit__Array *)0x0) break;
                          iVar17 = mscorlib.dll::System::String::String_IndexOf_2
                                            ((String *)pVVar1,0x5d,(MethodInfo *)0x0);
                          pSVar18 = mscorlib.dll::System::String::String_Substring_1
                                             ((String *)pVVar1,iVar17 + -1,1,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?();
                          }
                          this_02 = (VoxelHit__Array *)&UNK_?;
                          mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_msgstr_,pSVar18,::StringLiteral__,
                                     (MethodInfo *)0x0);
                        }
code_?:
                        if (pVVar4 == (VoxelHit__Array *)0x0) break;
                        this_04 = (VoxelHit__Array *)0x3;
                        pSVar18 = (String *)func_?();
                        this_01 = (VoxelHit__Array *)0x0;
                        pLVar19 = (List_1_UnityEngine_UIVertex_ *)&UNK_?;
                        pVVar6 = (VoxelHit__Array *)
                                 StringEscaping::StringEscaping_FromGettextFormat
                                           (pSVar18,(MethodInfo *)0x0);
                        if (this_01 == (VoxelHit__Array *)0x0) break;
                        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                        List_1_UIPushOption__Add
                                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pVVar6,
                                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                                  );
                      } while( true );
                    }
                    goto code_?;
                  }
                  pSVar18 = StringLiteral_Broken_catalog_file__plural_form;
                  if ((((uint)(TypeInfo__System__Console->vtable).Equals.methodPtr & 0x2000000) != 0
                      ) && ((TypeInfo__System__Console->_1).cctor_started == 0)) {
                    this_04 = (VoxelHit__Array *)&UNK_?;
                    func_?();
                    pSVar18 = StringLiteral_Broken_catalog_file__plural_form;
                  }
                  goto code_?;
                }
              }
              if (cVar13 != '\0') {
                if ((((uint)(TypeInfo__System__Console->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__Console->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar14 = (MethodInfo *)0x0;
                pSVar18 = StringLiteral_Broken_catalog_file__singular_fo;
code_?:
                mscorlib.dll::System::Console::Console_WriteLine(pSVar18,pMVar14);
                goto code_?;
              }
              pVVar3 = (VoxelHit__Array *)&UNK_?;
              pSVar18 = CatalogParser_ParseMessage
                                 (this,&text,(String **)&stack0xffffffe4,(StringReader *)this_02,
                                  (MethodInfo *)0x0);
              if (pVVar10 == (VoxelHit__Array *)0x0) goto code_?;
              this_01 = (VoxelHit__Array *)
                        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
              ;
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pVVar10,(UIPushOption__Enum)pSVar18,
                         MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                        );
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              this_02 = (VoxelHit__Array *)TypeInfo__System__String->static_fields->Empty;
              pMVar12 = MethodInfo__System__Collections__Generic__List<System::String>__ToArray__;
              mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                        ((List_1_VoxelHit_ *)pVVar10,
                         MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
              if ((pMVar12 == (MethodInfo *)0x0) ||
                 (pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                            List_1_VoxelHit__ToArray
                                      ((List_1_VoxelHit_ *)pMVar12,
                                       MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                                      ), pVVar6 == (VoxelHit__Array *)0x0)) goto code_?;
              method_00 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                          List_1_VoxelHit__ToArray
                                    ((List_1_VoxelHit_ *)pVVar6,
                                     MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                                    );
              pLVar19 = (List_1_UnityEngine_UIVertex_ *)0x0;
              this_04 = (VoxelHit__Array *)&UNK_?;
              cVar13 = func_?();
              if (cVar13 == '\0') goto code_?;
              this_04 = pVVar4;
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
                this_04 = pVVar4;
              }
              pVVar7 = (VoxelHit__Array *)0x0;
              pVVar4 = (VoxelHit__Array *)TypeInfo__System__String->static_fields->Empty;
              pVVar5 = pVVar4;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
              List_1_UnityEngine_UIVertex__Clear
                        (pLVar19,
                         MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
              pVVar6 = this_04;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
              List_1_UnityEngine_UIVertex__Clear
                        ((List_1_UnityEngine_UIVertex_ *)this_04,
                         MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
              List_1_UnityEngine_UIVertex__Clear
                        ((List_1_UnityEngine_UIVertex_ *)this_01,
                         MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
              pVVar8 = (VoxelHit__Array *)text;
              goto code_?;
            }
          }
          pVVar3 = this_02;
          CatalogParser_ParseMessage
                    (this,&text,(String **)&stack0xffffffe4,(StringReader *)this_02,
                     (MethodInfo *)0x0);
          pVVar7 = (VoxelHit__Array *)0x1000000;
          pVVar8 = (VoxelHit__Array *)text;
          goto code_?;
        }
      }
      CatalogParser_ParseMessage
                (this,&text,(String **)&stack0xffffffe4,(StringReader *)this_02,(MethodInfo *)0x0);
      pVVar8 = (VoxelHit__Array *)text;
      goto code_?;
    }
  }
  CatalogParser_ParseMessage
            (this,&text,(String **)&stack0xffffffe4,(StringReader *)this_02,(MethodInfo *)0x0);
  pVVar8 = (VoxelHit__Array *)text;
code_?:
  do {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)pVVar8,TypeInfo__System__String->static_fields->Empty,
                       (MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
    if (this_02 == (VoxelHit__Array *)0x0) goto code_?;
code_?:
    text = (String *)func_?();
    pVVar8 = (VoxelHit__Array *)text;
  } while( true );
joined_?:
  this_02 = output;
  if (pVVar2 == (VoxelHit__Array *)0x0) goto code_?;
  pVVar8 = (VoxelHit__Array *)
           mscorlib.dll::System::String::String_Trim((String *)pVVar2,(MethodInfo *)0x0);
  text = (String *)pVVar8;
  pVVar2 = pVVar8;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar9 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)pVVar8,TypeInfo__System__String->static_fields->Empty,
                     (MethodInfo *)0x0);
  if (bVar9 == 0) goto joined_?;
  index = 0;
  while( true ) {
    if (pVVar8 == (VoxelHit__Array *)0x0) goto code_?;
    pIVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)pVVar8,(MethodInfo *)pVVar3);
    pVVar2 = pVVar8;
    if (((int)pIVar16 <= index) ||
       (pVVar3 = pVVar8,
       uVar15 = mscorlib.dll::System::String::String_get_Chars
                         ((String *)pVVar8,index,(MethodInfo *)0x0),
       pVVar2 = (VoxelHit__Array *)text, uVar15 == 0x3a)) break;
    index = index + 1;
  }
  while( true ) {
    if (pVVar2 == (VoxelHit__Array *)0x0) goto code_?;
    pIVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)pVVar2,(MethodInfo *)pVVar10);
    if ((int)pIVar16 <= index) break;
    pVVar10 = pVVar2;
    uVar15 = mscorlib.dll::System::String::String_get_Chars
                      ((String *)pVVar2,index,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Char->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar15,(MethodInfo *)0x0);
    if (bVar9 != 0) break;
    index = index + 1;
  }
  pVVar10 = (VoxelHit__Array *)0x0;
  this_04 = (VoxelHit__Array *)
            mscorlib.dll::System::String::String_Substring_1
                      ((String *)pVVar2,0,index,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__IO__Path->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__IO__Path->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar == 0x5c) {
    if ((((uint)(TypeInfo__System__IO__Path->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__IO__Path->_1).cctor_started == 0)) {
      func_?();
    }
    if (this_04 == (VoxelHit__Array *)0x0) goto code_?;
    pVVar10 = (VoxelHit__Array *)&UNK_?;
    this_04 = (VoxelHit__Array *)
              mscorlib.dll::System::String::String_Replace
                        ((String *)this_04,0x2f,
                         TypeInfo__System__IO__Path->static_fields->DirectorySeparatorChar,
                         (MethodInfo *)0x0);
  }
  if (this_05 == (List_1_UIPushOption_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
            (this_05,(UIPushOption__Enum)this_04,
             MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
  output = (VoxelHit__Array *)0x0;
  pVVar2 = (VoxelHit__Array *)
            mscorlib.dll::System::String::String_Substring
                      ((String *)pVVar2,index,(MethodInfo *)0x0);
  goto joined_?;
code_?:
  func_?();
  goto code_?;
joined_?:
  if (this_02 != (VoxelHit__Array *)0x0) goto code_?;
  goto code_?;
code_?:
  if (((this_01 == (VoxelHit__Array *)0x0) ||
      (mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                 ((List_1_VoxelHit_ *)this_01,
                  MethodInfo__System__Collections__Generic__List<System::String>__ToArray__),
      pLVar19 == (List_1_UnityEngine_UIVertex_ *)0x0)) ||
     (mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                ((List_1_VoxelHit_ *)pLVar19,
                 MethodInfo__System__Collections__Generic__List<System::String>__ToArray__),
     pVVar6 == (VoxelHit__Array *)0x0)) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
            ((List_1_VoxelHit_ *)pVVar6,
             MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
  method = (MethodInfo *)0x4;
  text = (String *)&UNK_?;
  cVar13 = func_?();
  if (cVar13 == '\0') {
code_?:
    method_00->klass = (VoxelHit__Array__Class *)0x68a;
    goto code_?;
  }
  this_04 = pVVar6;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
    this_04 = pVVar6;
  }
  pVVar7 = (VoxelHit__Array *)0x0;
  pVVar4 = (VoxelHit__Array *)TypeInfo__System__String->static_fields->Empty;
  pVVar5 = pVVar4;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
  List_1_UnityEngine_UIVertex__Clear
            (pLVar19,MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
  pVVar6 = this_04;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
  List_1_UnityEngine_UIVertex__Clear
            ((List_1_UnityEngine_UIVertex_ *)this_04,
             MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
  List_1_UnityEngine_UIVertex__Clear
            ((List_1_UnityEngine_UIVertex_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::String>__Clear__);
  goto code_?;
}


/* String ParseMessage(String ByRef, String ByRef, StringReader) */

String * Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_ParseMessage
                   (CatalogParser *this,String **line,String **dummy,StringReader *sr,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (Collection_1_VoxelHit_ *)*dummy;
  if (pCVar1 != (Collection_1_VoxelHit_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                       ((String *)pCVar1,0,(int32_t)((int)&pIVar2[-1].monitor + 3),(MethodInfo *)0x0
                       );
    this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
              (this_00,pSVar3,(MethodInfo *)0x0);
    pSVar4 = this_00;
    if (this_00 != (StringBuilder *)0x0) {
      while( true ) {
        pSVar3 = (String *)(*(code *)pSVar4->klass[1]._0.parent)();
        *line = pSVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar5 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if (bVar5 != 0) break;
        if (*line == (String *)0x0) goto code_?;
        uVar6 = mscorlib.dll::System::String::String_get_Chars(*line,0,(MethodInfo *)0x0);
        if (uVar6 == 9) {
          if (*line == (String *)0x0) goto code_?;
          pSVar3 = mscorlib.dll::System::String::String_Substring(*line,1,(MethodInfo *)0x0);
          *line = pSVar3;
        }
        if (*line == (String *)0x0) goto code_?;
        uVar6 = mscorlib.dll::System::String::String_get_Chars(*line,0,(MethodInfo *)0x0);
        if (uVar6 != 0x22) break;
        pCVar1 = (Collection_1_VoxelHit_ *)*line;
        if (pCVar1 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
        uVar6 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)pCVar1,(int32_t)((int)&pIVar2[-1].monitor + 3),
                           (MethodInfo *)0x0);
        if (uVar6 != 0x22) break;
        pCVar1 = (Collection_1_VoxelHit_ *)*line;
        if (pCVar1 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(pCVar1,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           ((String *)pCVar1,1,(int32_t)((int)&pIVar2[-1].monitor + 2),
                            (MethodInfo *)0x0);
        pSVar3 = StringEscaping::StringEscaping_FromGettextFormat(pSVar3,(MethodInfo *)0x0);
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this_00,pSVar3,(MethodInfo *)0x0);
        pSVar4 = (StringBuilder *)0x0;
      }
      if (this_00 != (StringBuilder *)0x0) {
        pSVar3 = (String *)
                 (*(code *)(this_00->klass->vtable).ToString.method)
                           (this_00,(this_00->klass->vtable).
                                    System_Runtime_Serialization_ISerializable_GetObjectData.
                                    methodPtr);
        return pSVar3;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar7)();
  return pSVar3;
}


/* Boolean ReadParam(String, String, String ByRef) */

bool Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser_ReadParam
               (String *input,String *pattern,String **output,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  *output = TypeInfo__System__String->static_fields->Empty;
  if (input == (String *)0x0) {
    return 0;
  }
  pCVar1 = (Char__Array *)func_?(TypeInfo__System__Char,2);
  if (pCVar1 == (Char__Array *)0x0) goto code_?;
  if (pCVar1->max_length == 0) {
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    func_?();
    func_?();
  }
  else {
    pCVar1->vector[0] = 0x20;
    if (pCVar1->max_length < 2) goto code_?;
    pCVar1->vector[1] = 9;
    this = (Collection_1_VoxelHit_ *)
           mscorlib.dll::System::String::String_TrimStart(input,pCVar1,(MethodInfo *)0x0);
    if ((this == (Collection_1_VoxelHit_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0), pattern == (String *)0x0)
       ) goto code_?;
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pattern,(MethodInfo *)0x0);
    if ((int)pIVar3 < (int)pIVar4) {
      return 0;
    }
    bVar5 = mscorlib.dll::System::String::String_StartsWith
                      ((String *)this,pattern,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      return 0;
    }
    pSVar6 = mscorlib.dll::System::String::String_Trim(pattern,(MethodInfo *)0x0);
    if (pSVar6 == (String *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::String::String_Equals_2
                      (pSVar6,::StringLiteral___,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      this = (Collection_1_VoxelHit_ *)
             mscorlib.dll::System::String::String_Replace
                       ((String *)this,0x5c,0x2f,(MethodInfo *)0x0);
    }
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pattern,(MethodInfo *)0x0);
    if (this == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pSVar6 = mscorlib.dll::System::String::String_Substring
                       ((String *)this,(int32_t)pIVar3,(MethodInfo *)0x0);
    pCVar1 = (Char__Array *)func_?();
    if (pCVar1 == (Char__Array *)0x0) goto code_?;
    if (pCVar1->max_length == 0) goto code_?;
    pCVar1->vector[0] = 0x20;
    if (1 < pCVar1->max_length) {
      pCVar1->vector[1] = 9;
      if (pSVar6 != (String *)0x0) {
        pSVar6 = mscorlib.dll::System::String::String_TrimEnd(pSVar6,pCVar1,(MethodInfo *)0x0);
        pSRam00000000 = StringEscaping::StringEscaping_FromGettextFormat(pSVar6,(MethodInfo *)0x0);
        return 1;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* CatalogParser() */

void Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,3);
  if (pSVar1 == (String__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral_u000Du000A != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_u000Du000A,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_u000Du000A;
    if ((StringLiteral_u000D != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_u000D,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_u000D;
    if ((StringLiteral_u000A == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_u000A,(pSVar1->klass->_0).element_class), iVar3 != 0))
    {
      if (2 < pSVar1->max_length) {
        pSVar1->vector[2] = StringLiteral_u000A;
        TypeInfo__GNU__Gettext__CatalogParser->static_fields->LineSplitStrings = pSVar1;
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* CatalogParser(String, Encoding) */

void Assembly-CSharp.dll::GNU::Gettext::CatalogParser::CatalogParser__ctor
               (CatalogParser *this,String *text,Encoding *encoding,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__GNU__Gettext__CatalogParser->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__CatalogParser->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__CatalogParser);
  }
  pSVar1 = CatalogParser_GetNewLine(text,encoding,(MethodInfo *)0x0);
  (this->fields)._NewLine_k__BackingField = pSVar1;
  return;
}

