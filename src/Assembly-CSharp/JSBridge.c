
/* String BuildInvocationForArguments(String, Object[]) */

String * Assembly-CSharp.dll::JSBridge::JSBridge_BuildInvocationForArguments
                   (String *functionName,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this,functionName,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x28,(MethodInfo *)0x0);
    if (args != (Object__Array *)0x0) {
      iVar1 = args->max_length;
      uVar2 = 0;
      if (0 < (int)iVar1) {
        ppOStack_3 = args->vector;
        do {
          if (uVar2 != 0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,::StringLiteral___,(MethodInfo *)0x0);
          }
          if (args->max_length <= uVar2) goto code_?;
          pSVar4 = JSBridge_ObjectToJSString(*ppOStack_3,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,pSVar4,(MethodInfo *)0x0);
          uVar2 = uVar2 + 1;
          ppOStack_3 = ppOStack_3 + 1;
        } while ((int)uVar2 < (int)iVar1);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x29,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x3b,(MethodInfo *)0x0)
      ;
      pSVar4 = (String *)(*(this->klass->vtable).ToString.methodPtr)();
      return pSVar4;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Void DoKGMEval(String) */

void Assembly-CSharp.dll::JSBridge::JSBridge_DoKGMEval(String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
  pOVar1 = args;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this,functionName,(MethodInfo *)0x0);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x28,(MethodInfo *)0x0);
    if (args != (Object__Array *)0x0) {
      uVar2 = 0;
      if (0 < (int)args->max_length) {
        functionName = (String *)args->vector;
        args = (Object__Array *)args->max_length;
        do {
          if (uVar2 != 0) {
            args = (Object__Array *)::StringLiteral___;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,::StringLiteral___,(MethodInfo *)0x0);
            functionName = (String *)this;
          }
          if (pOVar1->max_length <= uVar2) goto code_?;
          value = JSBridge_ObjectToJSString((Object *)functionName->klass,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,value,(MethodInfo *)0x0);
          uVar2 = uVar2 + 1;
          functionName = (String *)&functionName->monitor;
        } while ((int)uVar2 < (int)args);
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x29,(MethodInfo *)0x0)
      ;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,0x3b,(MethodInfo *)0x0)
      ;
      message = (Object *)(*(this->klass->vtable).ToString.methodPtr)();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Attempting_to_use_js_eval_in_non,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ExternalEval(String) */

void Assembly-CSharp.dll::JSBridge::JSBridge_ExternalEval(String *script,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (script != (String *)0x0) {
    if (0 < (script->fields)._stringLength) {
      uVar1 = mscorlib.dll::System::String::String_get_Chars
                        (script,(script->fields)._stringLength + -1,(MethodInfo *)0x0);
      if (uVar1 != 0x3b) {
        pSVar2 = (String *)func_?(TypeInfo__System__Char);
        str1 = (String *)0x0;
        if (pSVar2 != (String *)0x0) {
          if (pSVar2->klass == TypeInfo__System__String) {
            str1 = pSVar2;
          }
          pSVar3 = TypeInfo__System__String;
          if (str1 == (String *)0x0) goto code_?;
        }
        script = mscorlib.dll::System::String::String_Concat_3(script,str1,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)script,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Attempting_to_use_js_eval_in_non,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pSVar2 = extraout_ECX;
  pSVar3 = extraout_EDX;
code_?:
  func_?(pSVar2,pSVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ObjectToJSString(Object) */

String * Assembly-CSharp.dll::JSBridge::JSBridge_ObjectToJSString(Object *o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__System__Collections__ICollection);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__System__Int16);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__UInt16);
    func_?(&TypeInfo__System__UInt32);
    func_?(&StringLiteral_u000A);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_u2028);
    func_?(&StringLiteral_u2029);
    func_?(&StringLiteral_null);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__n);
    func_?(&::StringLiteral___);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral_____);
    func_?(&StringLiteral__r);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_u000D);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_new_Array_);
    cRam_? = '\x01';
  }
  if (o == (Object *)0x0) {
    return StringLiteral_null;
  }
  pSVar1 = (String__Class *)o->klass;
  pOVar2 = (Object *)0x0;
  if (pSVar1 == TypeInfo__System__String) {
    pOVar2 = o;
  }
  if (pOVar2 != (Object *)0x0) {
    pSVar3 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
    pSVar4 = (String *)
             (*(o->klass->vtable).ToString.methodPtr)(o,(o->klass->vtable).ToString.method);
    if (pSVar4 != (String *)0x0) {
      pSVar4 = mscorlib.dll::System::String::String_Replace_1
                         (pSVar4,::StringLiteral__,::StringLiteral___,(MethodInfo *)0x0);
      if (pSVar4 != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar4,::StringLiteral__,::StringLiteral___,(MethodInfo *)0x0);
        if (pSVar4 != (String *)0x0) {
          pSVar4 = mscorlib.dll::System::String::String_Replace_1
                             (pSVar4,StringLiteral_u000A,StringLiteral__n,(MethodInfo *)0x0);
          if (pSVar4 != (String *)0x0) {
            pSVar4 = mscorlib.dll::System::String::String_Replace_1
                               (pSVar4,StringLiteral_u000D,StringLiteral__r,(MethodInfo *)0x0);
            if (pSVar4 != (String *)0x0) {
              pSVar4 = mscorlib.dll::System::String::String_Replace_1
                                 (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
              if (pSVar4 != (String *)0x0) {
                pSVar4 = mscorlib.dll::System::String::String_Replace_1
                                   (pSVar4,StringLiteral_u2028,::StringLiteral__,(MethodInfo *)0x0);
                if (pSVar4 != (String *)0x0) {
                  pSVar4 = mscorlib.dll::System::String::String_Replace_1
                                     (pSVar4,StringLiteral_u2029,::StringLiteral__,(MethodInfo *)0x0
                                     );
code_?:
                  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                     (pSVar3,pSVar4,::StringLiteral__,(MethodInfo *)0x0);
                  return pSVar3;
                }
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  pOVar2 = (Object *)0x0;
  if (pSVar1 == (String__Class *)TypeInfo__System__Int32) {
    pOVar2 = o;
  }
  if (pOVar2 != (Object *)0x0) {
code_?:
    pSVar3 = (String *)(*(pSVar1->vtable).ToString.methodPtr)(o,(pSVar1->vtable).ToString.method);
    return pSVar3;
  }
  pOVar2 = (Object *)0x0;
  if (pSVar1 == (String__Class *)TypeInfo__System__Int16) {
    pOVar2 = o;
  }
  if (pOVar2 != (Object *)0x0) goto code_?;
  pOVar2 = (Object *)0x0;
  if (pSVar1 == (String__Class *)TypeInfo__System__UInt32) {
    pOVar2 = o;
  }
  if (pOVar2 != (Object *)0x0) goto code_?;
  pOVar2 = (Object *)0x0;
  if (pSVar1 == (String__Class *)TypeInfo__System__UInt16) {
    pOVar2 = o;
  }
  if (pOVar2 != (Object *)0x0) goto code_?;
  pOVar2 = (Object *)0x0;
  if (pSVar1 == (String__Class *)TypeInfo__System__Byte) {
    pOVar2 = o;
  }
  if (pOVar2 != (Object *)0x0) goto code_?;
  pOVar2 = (Object *)0x0;
  if (pSVar1 == (String__Class *)TypeInfo__System__Single) {
    pOVar2 = o;
  }
  if (pOVar2 == (Object *)0x0) {
    pOVar2 = (Object *)0x0;
    if (pSVar1 == (String__Class *)TypeInfo__System__Double) {
      pOVar2 = o;
    }
    if (pOVar2 == (Object *)0x0) {
      pOVar2 = (Object *)0x0;
      if ((Char__Class *)o->klass == TypeInfo__System__Char) {
        pOVar2 = o;
      }
      if (pOVar2 == (Object *)0x0) {
        iVar5 = func_?(o,TypeInfo__System__Collections__IList);
        pIVar6 = TypeInfo__System__Collections__IList;
        if (iVar5 == 0) {
          pOVar2 = (Object *)func_?(3,o);
          pSVar3 = JSBridge_ObjectToJSString(pOVar2,(MethodInfo *)0x0);
          return pSVar3;
        }
        iVar5 = func_?(o,TypeInfo__System__Collections__IList);
        if (iVar5 != 0) {
          this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
          if (this != (StringBuilder *)0x0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,StringLiteral_new_Array_,(MethodInfo *)0x0);
            iVar5 = func_?(1,TypeInfo__System__Collections__ICollection,iVar5);
            iVar7 = 0;
            if (0 < iVar5) {
              do {
                if (iVar7 != 0) {
                  stack0xfffffff0 = this;
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (this,::StringLiteral___,(MethodInfo *)0x0);
                }
                _puStack_14 = (double)(ZEXT48(TypeInfo__System__Collections__IList) << 0x20);
                pOVar2 = (Object *)func_?();
                pSVar3 = JSBridge_ObjectToJSString(pOVar2,(MethodInfo *)0x0);
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (this,pSVar3,(MethodInfo *)0x0);
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar5);
            }
            stack0xfffffff0 = this;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,::StringLiteral__,(MethodInfo *)0x0);
            stack0xfffffff0 = (StringBuilder *)&UNK_?;
            pSVar3 = (String *)func_?();
            return pSVar3;
          }
          goto code_?;
        }
        func_?(o,pIVar6);
        pCVar8 = extraout_ECX;
      }
      else {
        pCVar8 = TypeInfo__System__Char;
        if ((o->klass->_0).element_class == (TypeInfo__System__Char->_0).element_class) {
          psVar9 = (short *)func_?(o);
          if (*psVar9 == 0x22) {
            return ::StringLiteral_____;
          }
          pSVar3 = mscorlib.dll::System::Char::Char_ToString
                             ((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
          pSVar4 = (String *)func_?(3,o);
          goto code_?;
        }
      }
      func_?(o,pCVar8);
      pSVar10 = (Single__Class *)extraout_EDX;
    }
    else {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if (pCVar11 == (CultureInfo *)0x0) goto code_?;
      pIVar12 = (IFormatProvider *)func_?(0xe,pCVar11);
      pSVar10 = (Single__Class *)TypeInfo__System__Double;
      if ((o->klass->_0).element_class == (TypeInfo__System__Double->_0).element_class) {
        pdVar13 = (double *)func_?(o);
        _puStack_14 = *pdVar13;
        pSVar3 = mscorlib.dll::System::Double::Double_ToString_2
                           ((Double *)&puStack_14,pIVar12,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  else {
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if (pCVar11 == (CultureInfo *)0x0) goto code_?;
    pIVar12 = (IFormatProvider *)func_?(0xe,pCVar11);
    pSVar10 = TypeInfo__System__Single;
    if ((o->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      func_?(o);
      pSVar3 = mscorlib.dll::System::Single::Single_ToString_1
                         ((Single *)&stack0xfffffff4,pIVar12,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  func_?(o,pSVar10);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar15)();
  return pSVar3;
}

