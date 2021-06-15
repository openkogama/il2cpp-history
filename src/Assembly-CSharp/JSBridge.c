
/* String BuildInvocationForArguments(String, Object[]) */

String * Assembly-CSharp.dll::JSBridge::JSBridge_BuildInvocationForArguments
                   (String *functionName,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
              (this,functionName,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x28,(MethodInfo *)0x0);
    if (args != (Object__Array *)0x0) {
      functionName = (String *)args->max_length;
      iVar1 = 0;
      if (0 < (int)functionName) {
        do {
          if (iVar1 != 0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                      (this,::StringLiteral___,(MethodInfo *)0x0);
            functionName = (String *)this;
          }
          o = (Object *)func_?();
          pSVar2 = JSBridge_ObjectToJSString(o,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (this,pSVar2,(MethodInfo *)0x0);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)functionName);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x29,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x3b,(MethodInfo *)0x0)
      ;
      pSVar2 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
      return pSVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void DoKGMEval(String) */

void Assembly-CSharp.dll::JSBridge::JSBridge_DoKGMEval(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)str,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Attempting_to_use_js_eval_in_non,(MethodInfo *)0x0);
  return;
}


/* Void ExternalCall(String, Object[]) */

void Assembly-CSharp.dll::JSBridge::JSBridge_ExternalCall
               (String *functionName,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
              (this,functionName,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x28,(MethodInfo *)0x0);
    if (args != (Object__Array *)0x0) {
      functionName = (String *)args->max_length;
      iVar1 = 0;
      if (0 < (int)functionName) {
        do {
          if (iVar1 != 0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                      (this,::StringLiteral___,(MethodInfo *)0x0);
            functionName = (String *)this;
          }
          pOVar2 = (Object *)func_?();
          value = JSBridge_ObjectToJSString(pOVar2,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (this,value,(MethodInfo *)0x0);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)functionName);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x29,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x3b,(MethodInfo *)0x0)
      ;
      pOVar2 = (Object *)(*(code *)(this->klass->vtable).ToString.method)();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Attempting_to_use_js_eval_in_non,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ExternalEval(String) */

void Assembly-CSharp.dll::JSBridge::JSBridge_ExternalEval(String *script,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (script != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)script,(MethodInfo *)0x0);
    if (0 < (int)pIVar1) {
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)script,(MethodInfo *)0x0);
      uVar2 = mscorlib.dll::System::String::String_get_Chars
                        (script,(int32_t)((int)&pIVar1[-1].monitor + 3),(MethodInfo *)0x0);
      if (uVar2 != 0x3b) {
        unaff_EDI = (String *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        str1 = (String *)0x0;
        if (unaff_EDI != (String *)0x0) {
          if (unaff_EDI->klass == TypeInfo__System__String) {
            str1 = unaff_EDI;
          }
          if (str1 == (String *)0x0) goto code_?;
        }
        script = mscorlib.dll::System::String::String_Concat_2(script,str1,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)script,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Attempting_to_use_js_eval_in_non,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  func_?(unaff_EDI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ObjectToJSString(Object) */

String * Assembly-CSharp.dll::JSBridge::JSBridge_ObjectToJSString(Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = o;
  uStack_2 = 0;
  uStack_3 = 0;
  if (o == (Object *)0x0) {
    return StringLiteral_null;
  }
  pSVar4 = (String__Class *)o->klass;
  pOVar5 = (Object *)0x0;
  if (pSVar4 == TypeInfo__System__String) {
    pOVar5 = o;
  }
  if (pOVar5 == (Object *)0x0) {
    pOVar5 = (Object *)0x0;
    if (pSVar4 == (String__Class *)TypeInfo__System__Int32) {
      pOVar5 = o;
    }
    if (pOVar5 == (Object *)0x0) {
      pOVar5 = (Object *)0x0;
      if (pSVar4 == (String__Class *)TypeInfo__System__Int16) {
        pOVar5 = o;
      }
      if (pOVar5 == (Object *)0x0) {
        pOVar5 = (Object *)0x0;
        if (pSVar4 == (String__Class *)TypeInfo__System__UInt32) {
          pOVar5 = o;
        }
        if (pOVar5 == (Object *)0x0) {
          pOVar5 = (Object *)0x0;
          if (pSVar4 == (String__Class *)TypeInfo__System__UInt16) {
            pOVar5 = o;
          }
          if (pOVar5 == (Object *)0x0) {
            pOVar5 = (Object *)0x0;
            if (pSVar4 == (String__Class *)TypeInfo__System__Byte) {
              pOVar5 = o;
            }
            if (pOVar5 == (Object *)0x0) {
              pOVar5 = (Object *)0x0;
              if (pSVar4 == (String__Class *)TypeInfo__System__Single) {
                pOVar5 = o;
              }
              if (pOVar5 == (Object *)0x0) {
                pOVar5 = (Object *)0x0;
                if (pSVar4 == (String__Class *)TypeInfo__System__Double) {
                  pOVar5 = o;
                }
                if (pOVar5 == (Object *)0x0) {
                  pOVar5 = (Object *)0x0;
                  if (pSVar4 == (String__Class *)TypeInfo__System__Char) {
                    pOVar5 = o;
                  }
                  if (pOVar5 != (Object *)0x0) {
                    psVar6 = (short *)func_?(o,TypeInfo__System__Char);
                    if (*psVar6 != 0x22) {
                      uStack_3 = 0x22;
                      pOVar5 = (Object *)func_?(&uStack_3,0);
                      pOVar1 = (Object *)func_?(3,pOVar1);
                      o = (Object *)0x22;
                      arg2 = (Object *)func_?(TypeInfo__System__Char,&o);
                      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                        func_?(TypeInfo__System__String);
                      }
                      pSVar7 = mscorlib.dll::System::String::String_Concat_1
                                          (pOVar5,pOVar1,arg2,(MethodInfo *)0x0);
                      return pSVar7;
                    }
                    return StringLiteral_____;
                  }
                  iVar8 = func_?(o,TypeInfo__System__Collections__IList);
                  if (iVar8 == 0) {
                    pOVar1 = (Object *)func_?(3,pOVar1);
                    pSVar7 = JSBridge_ObjectToJSString(pOVar1,(MethodInfo *)0x0);
                    return pSVar7;
                  }
                  piVar9 = (int *)func_?(pOVar1,TypeInfo__System__Collections__IList);
                  piVar10 = piVar9;
                  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
                  this_00 = this;
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2
                            (this,(MethodInfo *)0x0);
                  if (this != (StringBuilder *)0x0) {
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                              (this,StringLiteral_new_Array_,(MethodInfo *)0x0);
                    if (piVar9 != (int *)0x0) {
                      uVar11 = 0;
                      o = (Object *)0x0;
                      uVar12 = *(ushort *)(*piVar9 + 0xb6);
                      piVar13 = piVar9;
                      if (uVar12 != 0) {
                        do {
                          if (*(ICollection__Class **)(*(int *)(*piVar9 + 0x58) + (uint)uVar11 * 8)
                              == TypeInfo__System__Collections__ICollection) {
                            puVar14 = (undefined4 *)
                                     (*piVar10 +
                                     (*(int *)(*(int *)(*piVar10 + 0x58) + 4 + (uint)uVar11 * 8) +
                                     0x18) * 8);
                            goto code_?;
                          }
                          uVar11 = uVar11 + 1;
                          piVar13 = piVar10;
                          this = this_00;
                        } while (uVar11 < uVar12);
                      }
                      this_00 = this;
                      piVar10 = piVar13;
                      puVar14 = (undefined4 *)
                               func_?(piVar10,TypeInfo__System__Collections__ICollection,0)
                      ;
code_?:
                      o = (Object *)(*(code *)*puVar14)(piVar10,puVar14[1]);
                      iVar8 = 0;
                      if (0 < (int)o) {
                        do {
                          if (iVar8 != 0) {
                            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                      (this_00,::StringLiteral___,(MethodInfo *)0x0);
                          }
                          pOVar1 = (Object *)
                                   func_?(2,TypeInfo__System__Collections__IList,piVar10,
                                                   iVar8);
                          pSVar7 = JSBridge_ObjectToJSString(pOVar1,(MethodInfo *)0x0);
                          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                    (this_00,pSVar7,(MethodInfo *)0x0);
                          iVar8 = iVar8 + 1;
                        } while (iVar8 < (int)o);
                      }
                      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                (this_00,::StringLiteral__,(MethodInfo *)0x0);
                      pSVar7 = (String *)func_?(3,this_00);
                      return pSVar7;
                    }
                  }
                }
                else {
                  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__Globalization__CultureInfo);
                  }
                  pCVar15 = mscorlib.dll::System::Globalization::CultureInfo::
                            CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                  if (pCVar15 != (CultureInfo *)0x0) {
                    uVar16 = func_?(0xd,pCVar15);
                    func_?(pOVar1,TypeInfo__System__Double);
                    pSVar7 = (String *)func_?(&stack0xffffffdc,uVar16,0);
                    return pSVar7;
                  }
                }
              }
              else {
                if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr
                     & 0x2000000) != 0) &&
                   ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__Globalization__CultureInfo);
                }
                pCVar15 = mscorlib.dll::System::Globalization::CultureInfo::
                          CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if (pCVar15 != (CultureInfo *)0x0) {
                  uVar16 = func_?(0xd,pCVar15);
                  puVar14 = (undefined4 *)func_?(pOVar1,TypeInfo__System__Single);
                  uStack_2 = *puVar14;
                  pSVar7 = (String *)func_?(&uStack_2,uVar16,0);
                  return pSVar7;
                }
              }
              goto code_?;
            }
          }
        }
      }
    }
    pSVar7 = (String *)
              (*(code *)(pSVar4->vtable).ToString.method)(o,(pSVar4->vtable).GetTypeCode.methodPtr);
    return pSVar7;
  }
  pOVar5 = (Object *)func_?(&stack0xfffffff0,0);
  pSVar7 = (String *)
            (*(code *)(pOVar1->klass->vtable).ToString.method)(pOVar1,pOVar1->klass[1]._0.image);
  if (pSVar7 != (String *)0x0) {
    pSVar7 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar7,::StringLiteral__,::StringLiteral___,(MethodInfo *)0x0);
    if (pSVar7 != (String *)0x0) {
      pSVar7 = mscorlib.dll::System::String::String_Replace_1
                          (pSVar7,::StringLiteral__,::StringLiteral___,(MethodInfo *)0x0);
      if (pSVar7 != (String *)0x0) {
        pSVar7 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar7,StringLiteral_u000A,StringLiteral__n,(MethodInfo *)0x0);
        if (pSVar7 != (String *)0x0) {
          pSVar7 = mscorlib.dll::System::String::String_Replace_1
                              (pSVar7,StringLiteral_u000D,StringLiteral__r,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          if (pSVar7 != (String *)0x0) {
            pSVar7 = mscorlib.dll::System::String::String_Replace_1
                                (pSVar7,::StringLiteral__,
                                 TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
            if (pSVar7 != (String *)0x0) {
              pSVar7 = mscorlib.dll::System::String::String_Replace_1
                                  (pSVar7,StringLiteral_u2028,
                                   TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0)
              ;
              if (pSVar7 != (String *)0x0) {
                pSVar7 = mscorlib.dll::System::String::String_Replace_1
                                    (pSVar7,StringLiteral_u2029,
                                     TypeInfo__System__String->static_fields->Empty,
                                     (MethodInfo *)0x0);
                o = (Object *)0x22;
                pOVar1 = (Object *)func_?();
                pSVar7 = mscorlib.dll::System::String::String_Concat_1
                                    (pOVar5,(Object *)pSVar7,pOVar1,(MethodInfo *)0x0);
                return pSVar7;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar17)();
  return pSVar7;
}

