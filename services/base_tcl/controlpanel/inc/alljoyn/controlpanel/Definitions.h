/******************************************************************************
 * Copyright (c) 2013 - 2014, AllSeen Alliance. All rights reserved.
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 ******************************************************************************/

#ifndef DEFINES_H_
#define DEFINES_H_

/**
 * Types of Signals that can be sent: dismiss or dataChanged
 */
#define SIGNAL_TYPE_DISMISS 0
#define SIGNAL_TYPE_DATA_CHANGED 1

/**
 * Widget Types Enumerator
 */
#define WIDGET_TYPE_BASE 0
#define WIDGET_TYPE_CONTAINER 1
#define WIDGET_TYPE_PROPERTY 2
#define WIDGET_TYPE_ACTION 3
#define WIDGET_TYPE_LABEL 4
#define WIDGET_TYPE_DIALOG 5
#define WIDGET_TYPE_HTTP 6

/**
 * Information for Version Property
 */
#define PROPERTY_TYPE_VERSION 0
#define PROPERTY_TYPE_VERSION_SIG "q"
#define PROPERTY_TYPE_VERSION_NAME "Version"

/**
 * Information for States Property
 */
#define PROPERTY_TYPE_STATES 1
#define PROPERTY_TYPE_STATES_SIG "u"
#define PROPERTY_TYPE_STATES_NAME "States"

/**
 * Information for OptParams Property
 */
#define PROPERTY_TYPE_OPTPARAMS 2
#define PROPERTY_TYPE_OPTPARAMS_SIG "a{qv}"
#define PROPERTY_TYPE_OPTPARAMS_NAME "OptParams"

/**
 * Information for Value Property
 */
#define PROPERTY_TYPE_VALUE 3
#define PROPERTY_TYPE_VALUE_SIG "v"
#define PROPERTY_TYPE_VALUE_NAME "Value"

/**
 * Information for Message Property
 */
#define PROPERTY_TYPE_MESSAGE 4
#define PROPERTY_TYPE_MESSAGE_SIG "s"
#define PROPERTY_TYPE_MESSAGE_NAME "Message"

/**
 * Information for NumActions Property
 */
#define PROPERTY_TYPE_NUM_ACTIONS 5
#define PROPERTY_TYPE_NUM_ACTIONS_SIG "q"
#define PROPERTY_TYPE_NUM_ACTIONS_NAME "NumActions"

/**
 * Information for HttpControl Url
 */
#define PROPERTY_TYPE_URL 6
#define PROPERTY_TYPE_URL_SIG "s"

/**
 * Information for Label Property
 */
#define PROPERTY_TYPE_LABEL 7
#define PROPERTY_TYPE_LABEL_SIG "s"
#define PROPERTY_TYPE_LABEL_NAME "Label"

/**
 * Method types - OBSOLETE
 */
#define METHOD_TYPE_ADD 8
#define METHOD_TYPE_DELETE 9
#define METHOD_TYPE_VIEW 10
#define METHOD_TYPE_UPDATE 11
#define METHOD_TYPE_CONFIRM 12
#define METHOD_TYPE_CANCEL 13

/**
 * Information for Date Property
 */
#define DATE_PROPERTY 0
#define DATE_PROPERTY_SIG "(q(qqq))"

/**
 * Information for Time Property
 */
#define TIME_PROPERTY 1
#define TIME_PROPERTY_SIG "(q(qqq))"

/**
 * Base Optional Params and their signature
 */
#define BASE_LABEL 0
#define BASE_LABEL_SIG "s"
#define BASE_BG_COLOR 1
#define BASE_BG_COLOR_SIG "u"
#define BASE_LAYOUT_HINTS 2
#define BASE_LAYOUT_HINTS_SIG "aq"

/**
 * Property Widget Optional Params and their signature
 */
#define PROPERTY_UNIT_OF_MEASURE 3
#define PROPERTY_UNIT_OF_MEASURE_SIG "s"
#define PROPERTY_CONSTRAINT_LIST 4
#define PROPERTY_CONSTRAINT_LIST_SIG "a(vs)"
#define PROPERTY_CONSTRAINT_RANGE 5
#define PROPERTY_CONSTRAINT_RANGE_SIG "(vvv)"

/**
 * Dialog Optional Params and their signature
 */
#define DIALOG_LABEL_ACTION1 6
#define DIALOG_LABEL_ACTION1_SIG "s"
#define DIALOG_LABEL_ACTION2 7
#define DIALOG_LABEL_ACTION2_SIG "s"
#define DIALOG_LABEL_ACTION3 8
#define DIALOG_LABEL_ACTION3_SIG "s"

/**
 * Layout Hints - used for Container Widgets
 */
#define LAYOUT_HINT_VERTICAL_LINEAR 1
#define LAYOUT_HINT_HORIZONTAL_LINEAR 2

/**
 * Dialog Hints - used for Dialog Widgets
 */
#define DIALOG_HINT_ALERTDIALOG 1

/**
 * Property Hints - used for Property Widgets
 */
#define PROPERTY_WIDGET_HINT_SWITCH 1
#define PROPERTY_WIDGET_HINT_CHECKBOX 2
#define PROPERTY_WIDGET_HINT_SPINNER 3
#define PROPERTY_WIDGET_HINT_RADIOBUTTON 4
#define PROPERTY_WIDGET_HINT_SLIDER 5
#define PROPERTY_WIDGET_HINT_TIMEPICKER 6
#define PROPERTY_WIDGET_HINT_DATEPICKER 7
#define PROPERTY_WIDGET_HINT_NUMBERPICKER 8
#define PROPERTY_WIDGET_HINT_KEYPAD 9
#define PROPERTY_WIDGET_HINT_ROTARYKNOB 10
#define PROPERTY_WIDGET_HINT_TEXTVIEW 11
#define PROPERTY_WIDGET_HINT_NUMERICVIEW 12
#define PROPERTY_WIDGET_HINT_EDITTEXT 13

/**
 * Label Hints - used for Label Widgets
 */
#define LABEL_HINT_TEXTLABEL 1

/**
 * Action Hints - used for Action Widgets
 */
#define ACTION_WIDGET_HINT_ACTIONBUTTON 1

#endif /* DEFINES_H_ */
